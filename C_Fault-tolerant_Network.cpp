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

// pii find_min(vi& a, vi& b, vpii& sums, int n1, int n2)
// {
//     int i=0,j=0;
//     int x=-1,y=-1;
//     int m = INT_MAX;
//     while(i<n1 and j<n2)
//     {
//         int flag = 0;
//         for(auto z : sums)
//         {
//             if(i == z.first and j == z.second)
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//         if(flag)
//         {
//             ++i;
//             continue;
//         }

//         if(abs(a[i] - b[j]) < m)
//         {
//             m = abs(a[i] - b[j]);
//             x = i;
//             y = j;
//         }

//         if(a[i] < b[j])
//             ++i;
//         else
//             ++j;
//     }

//     return {x,y};
// }


int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vi a(n),b(n);
        rep(n)
        {
            cin >> a[i];
        }
        rep(n)
        {
            cin >> b[i];
        }

        vpii sums(4, {-1,-1});
        int m = INT_MAX;
        pii p;
        int xd[] = {0,n-1,0,n-1};
        rep(4)
        {
            m = INT_MAX;
            
            repc(j,n)
            {
                ll x = abs(b[j] - a[xd[i]]);
                if(i> 1)
                    x = abs(a[j] - b[xd[i]]);
                if(x < m)
                {
                    m = x;
                    p.first = m;
                    p.second = j;
                }   
            }
            sums[i] = p;
        }
        ll ans = 0;
        rep(4)
        {
            if(i>1)
            {
                if(sums[i].second == 0)
                {
                    if(sums[0].second == xd[i])
                        continue;
                }
                if(sums[i].second == n-1)
                {
                    if(sums[1].second == xd[i])
                        continue;
                }
            }
            ans += sums[i].first;
        }

        ll x1 = abs(a[0]-b[0]) + abs(a[n-1]-b[n-1]);
        ll x2 = abs(a[0]-b[n-1]) + abs(a[n-1]-b[0]);

        ans = min({ans,x1,x2});
        cout << ans << endl;

        
    }

    return 0;
}   