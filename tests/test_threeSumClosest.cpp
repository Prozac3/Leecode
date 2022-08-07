#include <Solution.h>
#include <iostream>
#include <vector>
using namespace std;
int main(int argv, char **argc)
{
    Solution *sol = new Solution();
    vector<int> nums = {-1,2,1,-4};
    cout << sol->threeSumClosest(nums, 1) << std::endl;
    return 0;
}