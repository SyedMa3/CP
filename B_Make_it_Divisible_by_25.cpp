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
        string n;
        cin >> n;
        int l = n.size();

        int i = l-1;
        int x1 = -1;
        int sum1=INT_MAX, sum2 = INT_MAX;
        while(i>=0)
        {
            if(x1 == -1)
            {
                if(n[i] == '0')
                {
                    x1 = i;
                }
                --i;
                continue;
            }
            else
            {
                if(n[i] == '0' or n[i] == '5')
                {
                    sum1 = x1-i-1+(l-1-x1);
                    break;
                }
            }
            --i;
        }
        i = l-1;
        x1 = -1;
        while(i>=0)
        {
            if(x1 == -1)
            {
                if(n[i] == '5')
                {
                    x1 = i;
                }
                --i;
                continue;
            }
            else
            {
                if(n[i] == '2' or n[i] == '7')
                {
                    sum2 = x1-i-1+(l-1-x1);
                    break;
                }
            }
            --i;
        }
        cout << min(sum1,sum2) << endl;
    }

    return 0;
}