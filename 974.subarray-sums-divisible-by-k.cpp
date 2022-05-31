/*
 * @lc app=leetcode id=974 lang=cpp
 *
 * [974] Subarray Sums Divisible by K
 */

// @lc code=start
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {

        int sum = 0;

        vector<int> m(k,0);
        m[0] = 1;
        int count = 0;

        for(auto i : nums)
        {
            sum += i;

            int rem = sum%k;

            if(rem < 0) rem += k;

            count += m[rem];
            m[rem]++;
        }
        
        return count;
    }
};
// @lc code=end

