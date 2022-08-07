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

    // utils
public:
    int find_Kth_num(const vector<int> &nums1, const vector<int> nums2, int k);
    
};

#endif //_SOLUTION_H_