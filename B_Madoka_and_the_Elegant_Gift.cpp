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
        int n,m;
        cin >> n >> m;

        vector<string> s(n);

        rep(n)
        {
            cin >> s[i];
        }
        vpii a = {{1,1}, {-1,-1}, {1,-1}, {-1,1}};
        int flag = 0;
        rep(n)
        {
            repc(j,m)
            {
                int count = 0;
                for(auto z : a)
                {
                    int x = z.first + i;
                    int y = z.second + j;

                    if(x<0 or x>=n or y<0 or y>=m)
                        continue;

                    if(s[i][j] == '1')
                    {
                        if(s[x][j] == '1' and s[i][y] == '1')
                        {
                            if(s[x][y] == '0')
                            {
                                flag = 1;
                                break;
                            }
                        }
                    }
                }
            }
            if(flag)
                break;
        }

        if(flag)
        {
            cout << "NO\n"; 
        }
        else
        {
            cout << "YES\n";
        }
    }

    return 0;
}