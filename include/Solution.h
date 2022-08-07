#ifndef _SOLUTION_H_
#define _SOLUTION_H_
#include <vector>

using namespace std;
class Solution
{
public:
    Solution();
    ~Solution();
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2);

    /*给你一个长度为n的整数数组nums和一个目标值target请你从nums中选出三个整数，
    使它们的和与 target 最接近。
    返回这三个数的和。
    假定每组输入只存在恰好一个解*/
    int threeSumClosest(vector<int>& nums, int target);
    
    // utils
private:
    int find_Kth_num(const vector<int> &nums1, const vector<int> nums2, int k);
};

#endif //_SOLUTION_H_