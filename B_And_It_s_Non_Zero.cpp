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
const int N = 1e6;
int a[N][30];

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    for(int i=1; i<N; ++i)
    {
        for(int j=1;j<30; ++j)
        {
            if((i>>(j-1))%2 != 0)
            {
                a[i][j] = 1;
            }
        }
    }

    for(int i=1; i<30; ++i)
    {
        for(int j=1; j<N; ++j)
        {
            a[j][i] += a[j-1][i];
        }
    }



    int t = 1;
    cin >> t;
    while (t--)
    {
        int l,r;
        cin >> l >> r;

        int ans=-1;

        for(int i=1; i<30; ++i)
        {
            int temp = a[r][i] - a[l-1][i];

            ans = max(ans, temp);
        }

        ans = r-l + 1 - ans;

        cout << ans << endl;
        
    }

    return 0;
}