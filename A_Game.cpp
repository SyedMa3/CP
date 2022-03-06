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
        ll count = 0;
        int l = 0;
        int r= n-1;
        while(a[l] == 1)
        {
            ++l;
        }
        while(a[r] == 1)
        {
            --r;
        }

        int flag = 0;
        rep(n-1)
        {
            if(a[i] == 0 and flag == 0)
            {
                flag = 1;
            }
            else if(a[i] == 1 and flag == 1)
            {
                flag = 2;
            }
            else if(a[i] == 0 and flag == 2)
            {
                flag = 3;
            }
        }

        if(flag == 3)
        {
            count = r-l+2;
        }
        else
        {
            rep(n-1)
            {
                if(a[i+1] == 1 and a[i] == 1)
                {
                    continue;
                }
                ++count;
            }
        }

        cout << count << endl;
    }

    return 0;
}