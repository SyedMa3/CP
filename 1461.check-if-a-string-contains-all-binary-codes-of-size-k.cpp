/*
 * @lc app=leetcode id=1461 lang=cpp
 *
 * [1461] Check If a String Contains All Binary Codes of Size K
 */

// @lc code=start
class Solution {
public:
    bool hasAllCodes(string s, int k) {

        int n = pow(2,k)-1;
        int l = s.size();

        vector<int> check(n+1,0);

        for(int i=0;i<l-k+1;++i)
        {
            string temp = s.substr(i,k);

            int t = stoi(temp, 0, 2);

            check[t] = 1;
        }

        for(auto i : check)
        {
            if(i == 0)
            {
                return false;
            }
        }

        return true;
        
    }
};
// @lc code=end

