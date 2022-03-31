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
    int tc = 1;
    while (tc<=t)
    {
        int x,y;
        string s;
        cin >> x >> y >> s;

        ll ans = 0;
        int n = s.size();

        rep(n)
        {
            if(s[i] != '?')
            {
                if(i == n-1)
                    break;
                if(s[i] == 'C' and s[i+1] == 'J')
                    ans += x;
                else if(s[i] == 'J' and s[i+1] == 'C')
                    ans +=y;

                continue;
            }

            int z = i+1;
            while(z<n and s[z] == '?')
                ++z;

            if(z == n)
            {
                break;
            }

            if(i == 0)
            {
                i = z-1;
                continue;
            }

            if(s[i-1] == 'C' and s[z] == 'J')
            {
                ans += x;
                i = z-1;
            }
            else if(s[i-1] == 'J' and s[z] == 'C')
            {
                ans += y;
                i = z-1;
            }
        }

        printf("Case #%d: %lld\n", tc, ans);
        tc++;
    }

    return 0;
}