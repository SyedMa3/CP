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

ll gcd(ll x,ll y){
	return y?gcd(y,x%y):x;
}

ll lcm(ll x,ll y){
	return x/gcd(x,y)*y;
}


int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n; cin >> n;

        ll ans = 0;
        ll l1 = 1;
        ll l2 = 1;

        for(int i=1;l2<=n;++i)
        {
            l2 = lcm(l2,i);
            if(l1>n)
                break;

            ans += (i*(n/l1 - n/l2))%M;
            l1 = l2;
        }

        cout << (ans)%M << endl;
    }

    return 0;
}