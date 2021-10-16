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
    int x = 1;
    while (t--)
    {
        long long int n,d,c,m;

        cin >> n >> d >> c >> m;

        string s;
        cin >> s;
        long long i;
        for(i=s.size()-1; i>=0; --i)
        {
            if(s[i] == 'D')
                break;
        }
        long long int j;
        for(j=0; j<i+1; ++j)
        {
            if(s[j] == 'C')
            {
                if(c>0)
                {
                    --c;
                }
                else
                {
                    break;
                }
            }
            else if(s[j] == 'D')
            {
                if(d>0)
                {
                    --d;
                    c += m;
                }
                else
                {
                    break;
                }
            }

        }
        if(j == i+1)
        {
            cout << "CASE #" << x << ": YES\n";
        }
        else
        {
            cout << "CASE #" << x << ": NO\n";
        }
        x++;
    }

    return 0;
}