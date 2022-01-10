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


        sortall(a);
        int f=1;

        // fore(i,1,n+1)
        // {
        //     int flag=0;
        //     unordered_map<int,int> m;
            
        //     repc(j,n)
        //     {
        //         if(a[j] == i)
        //         {
        //             flag = 1;
        //             break;
        //         }
        //         if(a[j]<=n and m[a[j]]<1)
        //         {
        //             m[a[j]]++;
        //             continue;
        //         }

        //         int x=a[j];
        //         while(x>0)
        //         {
        //             if(x == i)
        //             {
        //                 flag = 1;
        //                 a[j] = 0;
        //                 break;
        //             }
        //             x/=2;
        //         }

        //         if(flag)
        //         {
        //             break;
        //         }

        //     }
        //     if(flag == 0)
        //     {
        //         f=0;
        //         break;
        //     }
        // }

        // if(f)
        // {
        //     cout << "YES\n";
        // }
        // else
        // {
        //     cout << "NO\n";
        // }

        unordered_map<int,int> m;

        rep(n)
        {
            int x = a[i];

            while(x>0)
            {
                if(m[x]>0)
                {
                    x/=2;
                    continue;
                }
                m[x]++;
                if(x<=n)
                {
                    x=0;
                }
                x /= 2;
            }
        }

        fore(i,1,n+1)
        {
            if(m[i] == 0)
            {
                f = 0;
                break;
            }
        }

        if(f)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}