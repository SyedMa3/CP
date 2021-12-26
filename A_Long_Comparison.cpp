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
        int s1;
        int b1;
        cin >> s1 >> b1;
        int s2;
        int b2;
        cin >> s2 >> b2;

        ll l1 = to_string(s1).size() +b1;
        ll l2 = to_string(s2).size() +b2;

        if(l1<l2)
        {
            cout << "<\n";
            continue;
        }
        else if(l1>l2)
        {
            cout << ">\n";
            continue;
        }

        l1 = to_string(s1).size();
        l2 = to_string(s2).size();

        if(l1<l2)
        {
            s1 *= pow(10,l2-l1);
        }
        else if(l1>l2)
        {
            s2 *= pow(10 ,l1-l2);
        }

        if(s1<s2)
            cout << "<\n";
        else if(s1>s2)
            cout << ">\n";
        else
            cout << "=\n";

    }

    return 0;
}