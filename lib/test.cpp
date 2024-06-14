#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define int long long
#define endl "\n"

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define all(s) (s).begin(), (s).end()
#define nl cout << endl;
#define rd(x) \
    int x;    \
    cin >> x;
#define rs(s) \
    string s; \
    cin >> s;
#define INF 1e9 + 10;

typedef vector<int> vi;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key

const int mod = 1e9 + 7;
const int N = 1e5 + 10;

#define setbitsll(x) __builtin_popcountll(x)
#define setbits(x) __builtin_popcount(x)
#define rt return 0

int lcm(int a, int b)
{
    return (a * b) / (__gcd(a, b));
}

int min(int a, int b)
{
    return (a < b) ? a : b;
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int BinExpItr(int a, int b)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans * 1ll * a) % mod;
        }
        a = (a * 1ll * a) % mod;
        b >>= 1;
    }
    return ans;
}

//---------------Solution------------

void solve()
{
    rd(n);
    rd(m);
    vector<int> adj[n + 1];
    for (int i = 1; i <= m; i++)
    {
        rd(x);
        rd(y);
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int a = 4;
    cout << a << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        solve();
    }
#ifndef ONLINE_JUDGE
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs"
         << " " << endl;
#endif
    rt;
}