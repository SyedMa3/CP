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

int isPrime(int n)
{
    for(int i=2; i*i<=n;++i)
    {
        if(n%i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        int x,d;
        cin >> x >> d;
        int temp = x;
        int n = 0;
        while(x%d == 0 and x>0)
        {
            ++n;
            x /= d;
        }
        if(n == 1)
        {
            cout << "NO\n";
            continue;
        }
        int flag = 0;
        int y = sqrt(d);
        if(pow(d,n) == temp)
        {
            flag = 1;
            if(isPrime(d) or n<3)
            {
                cout << "NO\n";
                continue;
            }

        }
        if(isPrime(x) and flag == 0)
        {
            if(isPrime(d) )
            {
                cout << "NO\n";
                continue;
            }
            if(y*y == d and y == x and n == 3)
            {
                cout << "NO\n";
                continue;
            }
            if(n<3)
            {
                cout << "NO\n";
                continue;   
            }

        }
        // if(y*y == d)
        // {
        //     if(isPrime(y))
        //     {
        //         cout << "NO\n";
        //         continue;
        //     }
        // }



        cout << "YES\n";

    }

    return 0;
}