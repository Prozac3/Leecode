#include <Solution.h>
#include <iostream>
#include <vector>
int main(int argv, char **argc)
{
    Solution *sol = new Solution();
    std::vector<int> nums1 = {1, 3, 5, 7, 9};
    std::vector<int> nums2 = {2, 4, 6, 8};
    std::cout << sol->findMedianSortedArrays(nums1, nums2) << std::endl;
    return 0;
}