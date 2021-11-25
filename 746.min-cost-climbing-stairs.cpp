/*
 * @lc app=leetcode id=746 lang=cpp
 *
 * [746] Min Cost Climbing Stairs
 */

// @lc code=start
class Solution {
public:
    
    int helper(int i, vector<int>&cost, unordered_map<int,int>& m)
    {
        if(m[i] != 0)
        {
            return m[i];
        }
        if(i == -1)
        {
            m[i] = min(helper(i+1, cost, m), helper(i+2, cost, m));
        }
        else
        {
            m[i] = cost[i] + min(helper(i+1, cost, m), helper(i+2, cost, m));
        }
        
        
        return m[i];
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        unordered_map<int,int> m;
        int n = cost.size();
        m[n-1] = cost[n-1];
        m[n-2] = cost[n-2];

        return helper(-1, cost, m);
    }
};
// @lc code=end

