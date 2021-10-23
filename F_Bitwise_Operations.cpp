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

void bor(vl &a, int n)
{
    for(int i=0; i<n; i+=2)
    {
        a[i] = a[i] | a[i+1];
    }
    for(auto i = a.begin()+1; i!= a.end(); ++i)
    {
        a.erase(i);
        if(i == a.end())
        {
            break;
        }
    }
    return;
}

void bxor(vl &a, int n)
{
    for(int i=0; i<n; i+=2)
    {
        a[i] = a[i] ^ a[i+1];
    }
    for(auto i = a.begin()+1; i!= a.end(); ++i)
    {
        a.erase(i);
        if(i == a.end())
        {
            break;
        }
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    while (t--)
    {
        int n, m;

        cin >> n >> m;

        ll an = pow(2,n);
        vl a(an);
        rep(an)
        {
            cin >> a[i];
        }

        while(m--)
        {
            ll p,b;
            cin >> p >> b;

            a[p-1] = b;
            int temp = an;
            int count = 1;
            vl bv(a);
            while(temp>1)
            {
                if(count%2 == 0)
                {
                    bxor(bv, temp);
                }
                else
                {
                    bor(bv, temp);
                }
                count++;
                temp /= 2;
            }

            cout << bv[0] << endl;

        }


    }

    return 0;
}