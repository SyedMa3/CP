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
        string s;
        cin >> s;
        int n = s.size();

        int a=0,b=0,c=0;

        while(a<n and s[a] == s[0])
        {
            ++a;
        }
        --a;
        b = a+1;
        while(b<n and s[b] == s[a+1])
        {
            ++b;
        }
        --b;
        ll ans = INT_MAX;

        while(a<n and b<n and c<n)
        {
            c = b+1;
            if(c >= n)
                break;
            if(s[c] == s[a])
            {
                while(c<n and s[c] == s[a])
                    ++c;
                --c;
                a = b;
                b = c;
                continue;
            }
            
            ans = min(ans, (ll)c - a + 1);

            while(c<n and s[c] == s[b+1])
            {
                ++c;
            }
            --c;
            a = b;
            b = c;
        }
        if(ans == INT_MAX)
        {
            cout << 0 << endl;
            continue;
        }
        cout << ans << endl;
    }

    return 0;
}