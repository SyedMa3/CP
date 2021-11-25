/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution {
public:

    int helper(int n, unordered_map<int,int>& m)
    {
        if(m[n] != 0)
        {
            return m[n];
        }

        m[n] = helper(n-2,m)  + helper(n-1,m);

        return m[n];
    }

    int climbStairs(int n) {
        unordered_map<int,int> m;

        m[1] = 1;
        m[2] = 2;

        return helper(n,m);
    }
};
// @lc code=end

