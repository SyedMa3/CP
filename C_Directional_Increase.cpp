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
        if(n == 1)
        {
            if(a[0] == 0)
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
            continue;
        }

        int z = n-1;

        while(a[z] == 0)
        {
            --z;
        }

        vi b(n, 0);
        b[0] = 1;
        b[n-1] = -1;
        int flag = 0;
        ll temp = 0;

        ll sum = 0;
        rep(n)
        {
            sum += a[i];
            if(sum < 0)
            {
                flag = 1;
                break;
            }
            if(sum == 0 and i < z)
            {
                flag = 1;
                break;
            }
            b[i] += temp;
            temp = b[i] - a[i];
            b[i] = a[i];
        }

        if(temp != 0 or flag == 1)
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }

    }

    return 0;
}