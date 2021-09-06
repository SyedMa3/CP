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

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n,x;
        cin >> n >> x;
        vi a;
        unordered_map <int, int> umap;
        rep(n)
        {
            int y;
            cin >> y;
            a.pb(y);
        }
        vi b;
        rep(n)
        {
            b.pb(a[i]^x);
        }
        unordered_map <int,int> c;
        int op=0;
        rep(2*n)
        {
            if(i<n)
            {
                // c.pb(a[i]);
                umap[a[i]]++;
            }
            else
            {
                // c.pb(b[i]);
                umap[b[i-n]]++;
                c[b[i-n]]++;
            }
        }
        int counts = 0;
        int element;
        
        for(auto i : umap)
        {
            if(counts < i.second)
            {
                counts = i.second;
                element = i.first;
            }
        }
        cout << counts << " " << c[element] << "\n";
    }

    return 0;
}