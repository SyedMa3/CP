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

int solve(vi& dist)
{
    int x1 = *max_element(dist.begin(),dist.end()-1);
    
    return (x1-1)/2;
}


int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n,d;
        cin >> n >> d;

        vi a(n);
        rep(n)
        {
            cin >> a[i];
        }
        if(n == d)
        {
            cout << 0 << endl;
            continue;
        }

        vi dist(n+1);
        dist[0] = a[0]-1;
        fore(i,1,n)
        {
            dist[i] = a[i]-a[i-1]-1;
        }
        dist[n] = d - a[n-1];

        int index = min_element(dist.begin(),dist.end()-1) - dist.begin();
        int z = dist[index];
        // if(index != n)
        //     z = index+1;
        // if(index > 0 and index != n-1)
        // {
        //     if(dist[index-1] < dist[index+1])
        //     {
        //         z = index;
        //         index--;
        //     }
        // }
        // else if(index == n-1)
        // {
        //     z = index;
        //     index--;
        // }
        dist[index+1] = dist[index] + dist[index+1]+1;
        dist.erase(dist.begin()+index);

        int m1 = min(*min_element(dist.begin(),dist.end()-1) ,max(solve(dist), dist[n-1]-1));
        if(index>0)
        {
            dist[index-1] += z+1;
            dist[index] -= z+1; 

            int m2 = min(*min_element(dist.begin(),dist.end()-1) ,max(solve(dist), dist[n-1]-1));
            cout << max(m1,m2) << endl;
            continue;
        }

        cout << m1 << endl;

    }

    return 0;
}