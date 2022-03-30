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
        int ones = 0;

        rep(n)
        {
            cin >> a[i];
            if(a[i] == 1)
                ++ones;
        }

        if(n == 1 and a[0] == 1)
        {
            cout << "YES\n";
            continue;
        }
        int flag = 0;

        if(ones != 1)
            flag = 1;
        else
        {
            int ind = find(all(a), 1) - a.begin();
            rotate(a.begin(), a.begin()+ind, a.end());
            fore(i,1,n)
            {
                if(a[i] - a[i-1] > 1)
                {
                    flag = 1;
                    break;
                }
            }
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