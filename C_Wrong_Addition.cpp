#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.1415926535897932384626
#define rep(n) for (int i = 0; i < n; ++i)
#define repc(i, n) for (ll i = 0; i < n; i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sortall(x) sort(all(x))
#define tr(it, x) for (auto it = x.begin(); it != x.end(); it++)
#define trr(it, x) for (auto it = x.rbegin(); it != x.rend(); it +)
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

const unsigned int M = 1000000007;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        string s,a;
        cin >> a >> s;

        int l = a.size();
        string ans="";
        int flag= 0;
        int l2 = s.size();
        int j = l2-1;
        for(int i=l-1; i>=0; --i)
        {
            if(s.empty())
            {
                flag = 1;
                break;
            }
            if(a[i] <= s[j])
            {
                ans += (to_string(s[j] - a[i]) != "")?to_string(s[j] - a[i]):"0";
                s.pop_back();
                a.pop_back();
                --j;
            }
            else
            {
                if(j == 0)
                {
                    flag = 1;
                    break;
                }
                if(s[j-1] != '1')
                {
                    flag = 1;
                    break;
                }

                ans += to_string(stoi(s.substr(j-1,2)) - (int)(a[i] - '0'));
                s.pop_back();
                s.pop_back();
                a.pop_back();
                j -= 2;
            }
        }
        reverse(all(s));
        ans += s;
        j = ans.size()-1;
        while(ans[j] == '0')
        {
            ans.pop_back();
            --j;
        }
        std::reverse(all(ans));



        if(flag)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }

    return 0;
}