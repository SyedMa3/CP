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
        vector <char> b(n);
        rep(n)
        {
            cin >> a[i];
        }
        int n1=0,s=0;
        rep(n)
        {
            cin >> b[i];
            if(b[i] == 'N')
                ++n1;
            else
                ++s;
        }
        if(is_sorted(all(a)))
        {
            cout << 0 << endl;
            continue;
        }
        vi c = a;
        sortall(c);
        int l1=-1, l2=-1;
        fore(i,0,n)
        {
            if(a[i] != c[i])
            {
                l1 = i;
                break;
            }
        }

        if(l1 != -1)
        {
            for(int i=n-1; i>=0; --i)
            {
                if(a[i] != c[i])
                {
                    l2 = i;
                    break;
                }
            }
        }


        if(n1 == 0 or s == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            // if(b[l1] == b[l2])
            // {
            //     cout << 2 << endl;
            // }
            // else
            // {
            //     cout << 1 << endl;
            // }
            int flag = 0;
            for(int i=n-1; i>=l2; --i)
            {
                if(b[i] != b[l1])
                {
                    flag = 1;
                    break;
                }
            }

            fore(i,0,l1+1)
            {
                if(b[i] != b[l2])
                {
                    flag = 1;
                    break;
                }
            }

            if(flag)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }

        
    }

    return 0;
}