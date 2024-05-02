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

ll helper(ll n, ll m, ll d) {
    bool val = (m - n) % d == 0;
    return (m - n) / d + 1 - val;
}

void solve()
{
    ll n, m, d;
    cin >> n >> m >> d;
    vl v(m);
    int flag1 = 0, flag2 = 0;
    fr(i, 0, m) {
        cin >> v[i];
        if (v[i] == 1)
            flag1 = 1;
    }
    if (!flag1) v.insert(v.begin(), 1);
    v.push_back(n + 1);
    ll rem = 0;
    fr(i, 1, sz(v)) {
        rem += helper(v[i - 1], v[i], d);
    }
    ll temp = rem;
    ll final = temp;
    fr(i, 1, sz(v) - 1) {
        ll temp1 = helper(v[i - 1], v[i + 1], d) - helper(v[i - 1], v[i], d) - helper(v[i], v[i + 1], d);
        final = temp + temp1;
        rem = min(rem, final);
    }
    ll cnt = 0;
    fr(i, 1, sz(v)) {
        ll temp1 = helper(v[i - 1], v[i + 1], d) - helper(v[i - 1], v[i], d) - helper(v[i], v[i + 1], d);
        final = temp + temp1;
        if (rem == final) cnt++;
    }
    if (rem == temp and !flag1) cnt++;
    cout << rem << " " << cnt << endl;

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