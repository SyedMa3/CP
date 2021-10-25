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
        int n;
        string s;
        cin >> n >> s;

        int ans = n+1;

        rep(26)
        {
            int l = 0, r=n-1, cnt = 0;
            while(l<=r)
            {
                if(s[l] == s[r])
                {
                    ++l;
                    --r;
                }
                else if(s[l] == char('a' + i))
                {
                    ++cnt;
                    ++l;
                }
                else if(s[r] == char('a' + i))
                {
                    ++cnt;
                    --r;
                }
                else
                {
                    cnt = n+1;
                    break;
                }
            }
            ans = min(cnt,ans);
        }
        if(ans == n+1)
        {
            ans = -1;
        }
        cout << ans << endl;

    }

    return 0;
}