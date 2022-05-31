/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n = prices.size();

        if(n == 1)
            return 0;

        int r = prices[n-1];
        int l = prices[n-2];

        int min_so_far = min(r,l);
        int max_so_far = max(r,l);

        for(int i=n-3;i>=0;--i)
        {
            if(max_so_far - prices[i] > r-l)
            {
                l = prices[i];
                r = max_so_far;
            }
            max_so_far = max(prices[i], max_so_far);
            min_so_far = min(prices[i], min_so_far);
        }
        if(r-l < 0)
            return 0;
        
        return r-l;
    }
};
// @lc code=end

