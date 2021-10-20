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

int solve(int a, int b, int c)
{
    int x1 = b-a;
    int x2 = c-a;

    if(x1 <0 and x2<0)
    {
        return 0;
    }

    if(x1>0 or x2>0)
    {
        return max(x1,x2)+1;
    }

    if(x1 == 0 or x2 == 0)
    {
        return 1;
    }

    return max(x1,x2)+1;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        int a,b,c;
        cin >> a >> b >> c;

        cout << solve(a,b,c) << " " << solve(b,a,c) << " " << solve(c,a,b) << endl;
        
    }

    return 0;
}