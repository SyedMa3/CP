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

        string s;
        cin >> s;

        vi st;
        rep(n)
        {
            if(s[i] == '2')
                st.push_back(i);
        }
        int l = st.size();

        if(l == 2 or l == 1)
        {
            cout << "NO\n";
            continue;
        }

        vector<vector<char>> a(n, vector<char>(n, 'f'));

        for(int i=0;i<n;++i)
        {
            for(int j=0; j<n;++j)
            {
                if(i == j)
                {
                    a[i][j] = 'X';
                    continue;
                }
                a[i][j] = '=';
                a[j][i] = '=';
            }
        }

        if(l > 2)
        {
            rep(l)
            {
                a[st[i]][st[(i+1)%l]] = '+';
                a[st[(i+1)%l]][st[i]] = '-';
            }
        }

        cout << "YES\n";

        rep(n)
        {
            repc(j,n)
            {
                cout << a[i][j];
            }
            cout << endl;
        }


    }

    return 0;
}