#include <Solution.h>

Solution::Solution()
{
}

Solution::~Solution()
{
}

double Solution::findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    int total = nums1.size() + nums2.size();
    if (total % 2 == 1)
    {
        return find_Kth_num(nums1, nums2, (total + 1) / 2);
    }
    else
    {
        return (find_Kth_num(nums1, nums2, total / 2) +
                find_Kth_num(nums1, nums2, total / 2 + 1)) /
               2.0;
    }
}

int Solution::find_Kth_num(const vector<int> &nums1,
                           const vector<int> nums2, int k)
{
    int m = nums1.size();
    int n = nums2.size();
    int index1 = 0;
    int index2 = 0;
    while (true)
    {
        // 边界情况
        if (index1 == m)
        {
            return nums2[index2 + k - 1];
        }
        if (index2 == n)
        {
            return nums1[index1 + k - 1];
        }
        if (k == 1)
        {
            return min(nums1[index1], nums2[index2]);
        }

        // 正常情况
        int newIndex1 = min(index1 + k / 2 - 1, m - 1);
        int newIndex2 = min(index2 + k / 2 - 1, n - 1);
        int pivot1 = nums1[newIndex1];
        int pivot2 = nums2[newIndex2];
        if (pivot1 <= pivot2)
        {
            k -= newIndex1 - index1 + 1;
            index1 = newIndex1 + 1;
        }
        else
        {
            k -= newIndex2 - index2 + 1;
            index2 = newIndex2 + 1;
        }
    }
}