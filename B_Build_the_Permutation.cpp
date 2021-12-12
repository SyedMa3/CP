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
        int n,a,b;

        cin >> n >> a >> b;

        if(abs(a-b) > 1 or a>n/2 or b>n/2 or a+b>n-2)
        {
            cout << -1 << endl;
            continue;
        }

        int h = n;
        int l = 1;
        int flag = 0;

        if(a >= b)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
        int tempa = a;
        int tempb = b;


        vi v(n+1);
        int i;
        for(i=2; i<=n; i += 2)
        {
            if(flag == 0)
            {
                if(b > 0)
                {
                    v[i] = l;
                    ++l;
                    --b;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if(a > 0)
                {
                    v[i] = h;
                    --h;
                    --a;
                }
                else
                {
                    break;
                }
            }
        }
        // if(tempa == tempb)
        // {
        //     v[i-1] = h;
        // }


        for(int i=1; i<=n; ++i)
        {
            if(v[i] == 0)
            {
                if(flag == 0 or tempa==tempb)
                {
                    v[i] = l;
                    ++l;
                }
                else
                {
                    v[i] = h;
                    --h;
                }
            }
        }

        for(int i=1; i<=n; ++i)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }

    return 0;
}