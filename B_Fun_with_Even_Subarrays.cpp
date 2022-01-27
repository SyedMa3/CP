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

        vi a(n);

        rep(n)
        {
            cin >> a[i];
        }

        int z = n-2;
        while(a[z] == a[n-1])
        {
            --z;
        }

        int count = n-z-1;
        int ans = 0;
        int tcount = 0;
        // ++z;
        for(int i = z; i>=0;--i)
        {
            tcount = 0;
            while(a[i] == a[n-1] and i>=0)
            {
                ++count;
                --i;
            }
            if(a[i] != a[n-1] and i>=0)
            {
                if(i+1 > count)
                {
                    i = i-count+1;
                    count *= 2;
                    ++ans;
                }
                else
                {
                    count += i+1;
                    ++ans;
                    i = -1;
                }
            }
            // while(tcount > 0)
            // {
            //     if(tcount < count)
            //     {
            //         count += tcount;
            //         tcount = 0;
            //         ++ans;
            //         break;
            //     }
            //     tcount -= count;
            //     count *= 2;
            //     ++ans;
            // }
        }

        cout << ans << endl;
    }

    return 0;
}