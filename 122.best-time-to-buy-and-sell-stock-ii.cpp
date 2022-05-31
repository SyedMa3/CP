/*
 * @lc app=leetcode id=122 lang=cpp
 *
 * [122] Best Time to Buy and Sell Stock II
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n= prices.size();

        int b = prices[0];

        int profit = 0;

        for(int i=1;i<n;++i)
        {
            if(b > prices[i])
            {
                b = prices[i];
            }
            else
            {
                profit += prices[i] - b;
                b = prices[i];
            }
        }

        return profit;
    }
};
// @lc code=end

