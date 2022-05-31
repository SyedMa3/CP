// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <map>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {


        int n = nums.size();
        map<int,int> m;

        for(int i=0;i<n;++i)
        {
            m[nums[i]] = i;
        }
        vector<int> a;

        for(int i=0;i<n;++i)
        {
            if(m[target - nums[i]] != 0 and m[target - nums[i]] != i)
            {
               int y = m[target - nums[i]];
               a.push_back(i);
               a.push_back(y);
               break;
            }
        }
        
        return a;
    }
};
// @lc code=end

