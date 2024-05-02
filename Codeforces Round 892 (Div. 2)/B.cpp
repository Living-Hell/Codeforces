#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef unordered_map<ll, ll> umap;
// typedef map<ll, ll> map;
#define ldb long double
#define all(a) a.begin(), a.end()
#define pb push_back
#define fi first
#define se second
#define pc pop_back()
#define uniquev(v) v.resize(unique(all(v))-v.begin())
#define cntbit(v) __builtin_popcountll(v)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((1LL*a*b)/__gcd(a,b))
#define mask(x) (1LL<<(x))
#define readbit(x,i) ((x>>i)&1)
#define ins insert
#define sz(a) ((int)a.size())
#define fr(i, a, n) for(int i = a; i < n; i ++)
#define rf(i, a, n) for(int i = n-1; i >= a; i --)
const int mod = 1000000000 + 7;

/* END OF TEMPLATE*/

// ================= Solution =================//


void solve()
{
    ll n;
    cin >> n;
    vvl v(n, vl());
    int q = 0;
    while (q < n) {
        ll m;
        cin >> m;
        v[q].resize(m);
        for (int i = 0; i < m; i++) cin >> v[q][i];
        sort(all(v[q]));
        q++;
    }

    sort(all(v), [&](const vl & a, const vl & b) {
        return a[1] < b[1];
    });

    // for (auto i : v) {
    //     for (ll j : i) {
    //         cout << j << " ";
    //     } cout << endl;
    // }

    ll cur = v[0][0] , ans = 0;

    for (int i = 1; i < n; i++) {
        cur = min (cur, v[i][0]);
        ans += v[i][1];
    }

    cout << ans + cur << endl;


    // for (ll i : ans) cout << i << " "; cout << endl;


}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    long long int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}