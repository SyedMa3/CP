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
        
        set<pii> s;

        rep(n)
        {
            int x;
            cin >> x;
            if(x == 0)
                continue;

            s.insert({-x,i+1});
        }
        vpii ans;

        while(s.size() > 1)
        {
            auto p1 = *s.begin();
            s.erase(s.begin());
            auto p2  = *s.begin();
            s.erase(*s.begin());

            ans.pb({p1.second, p2.second});

            if(-p1.first>1)
                s.insert({p1.first+1, p1.second});

            if(-p2.first>1)
                s.insert({p2.first+1, p2.second});            
        }
        int l = ans.size();
        cout << l << endl;
        rep(l)
        {
            cout << ans[i].first << " " << ans[i].second << endl;
        }
    }

    return 0;
}