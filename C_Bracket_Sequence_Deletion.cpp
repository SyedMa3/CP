#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.1415926535897932384626
#define rep(n) for (int i = 0; i < n; ++i)
#define repc(i, n) for (ll i = 0; i < n; i++)
#define fore(i,x1,x2) for(ll i=x1; i<x2; ++i)
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
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<char> pal,reg;

        int ind = -1;
        int count = 0;


        fore(i,0,n)
        {
            if(pal.empty() == true)
            {
                pal.push_back(s[i]);
                reg.push_back(s[i]);
                continue;
            }
            int p = pal.back();
            int r = reg.back();

            if(r == 40 and s[i] == ')')
            {
                reg.pop_back();
            }
            else
            {
                reg.push_back(s[i]);
            }
            if(s[i] == pal.back())
            {
                pal.pop_back();
            }
            else if(pal.size() == 2 and s[i] == pal[0])
            {
                pal.clear();
            }
            else
            {
                pal.push_back(s[i]);
            }

            if(reg.empty() == true or pal.empty() == true)
            {
                reg = {};
                pal = {};
                ind = i;
                ++count;
            }
        }

        cout << count << " " << n-ind-1 << endl;
    }

    return 0;
}