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

vector<pii> d = {{1,0},{0,1},{-1,0},{0,-1},{1,1},{-1,-1},{-1,1},{1,-1}};

void dfs(int i,int j, int k, int l, vector<vpii>& m)
{
    if(l>k)
        return;

    if(m[i][j].first == 1 and l > m[i][j].second)
        return;

    m[i][j] = {1,l};
    for(auto p : d)
    {
        int x=i+p.first, y = j + p.second;
        if(x<0 or y<0 or x>7 or y>7)
            continue;
        if(m[x][y].first == 0 or l < m[x][y].second)
        {
            dfs(x,y,k,l+1,m);
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        int r,c,k;
        cin >> r >> c >> k;

        vector<vector<pii>> m(8, vector<pii>(8,{0,M}));

        dfs(r-1,c-1,k, 0, m);
        int count = 0;
        rep(8)
        {
            repc(j,8)
            {
                if(m[i][j].first == 1)
                    ++count;
            }
        }

        cout << count << endl;
    }

    return 0;
}