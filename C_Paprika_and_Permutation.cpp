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
        int n;
        cin >> n;

        vi a(n);

        for(int i=0; i<n; ++i)
        {
            cin >> a[i];
        }

        sortall(a);

        int count = 0;
        int num = 1;
        vi freq(n+1, 0);
        int flag = 0;
        rep(n)
        {
            while(freq[num] == 1)
            {
                ++num;
            }
            if(num == n+1)
            {
                break;
            }
            if(a[i] <= n and freq[a[i]] == 0)
            {
                freq[a[i]]++;
                continue;
            }
            if(a[i] - num > num)
            {
                a[i] = a[i]%(a[i] - num);
                freq[num]++;
                ++count;
            }
            else
            {
                flag = 1;
                break;
            }
        }

        if(flag)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << count << endl;
        }
        
    }

    return 0;
}