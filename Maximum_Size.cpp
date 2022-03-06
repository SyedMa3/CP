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

vector<pii> d = {{1,0},{-1,0}, {0,-1},{0,1}};
int n,m;

int dfs(int i,int j, vector<string>& a)
{
    int size = 0;
    queue<pii> s;
    s.push({i,j});

    while(!s.empty())
    {
        auto p = s.front();
        s.pop();
        ++size;
        int x=p.first, y = p.second;
        a[x][y] = '0';

        for(auto dir : d)
        {
            int i = x+dir.first, j = y+dir.second;
            if(i>=0 and j>=0 and i<n and j<m)
            {
                if(a[i][j] == '1')
                {
                    a[i][j] = '0';
                    s.push({i,j});
                }
            }
        }
    }
    return size;
}


int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        // int n,m;
        cin >> n >> m;

        vector<string> a(n);

        rep(n)
        {
            cin >> a[i];
        }

        vi sizes;

        fore(i,0,n)
        {
            fore(j,0,m)
            {
                if(a[i][j] == '1')
                    sizes.pb(dfs(i,j,a));
            }
        }

        sortall(sizes);

        ll sum = 0;
        int l = sizes.size();

        for(int i=l-2; i>=0; i-=2)
        {
            sum += sizes[i];
        }

        cout << sum << endl;
    }

    return 0;
}