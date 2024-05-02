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
#define uniquev(v) v.resize(unique(all(v)) - v.begin())
#define cntbit(v) __builtin_popcountll(v)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((1LL * a * b) / __gcd(a, b))
#define mask(x) (1LL << (x))
#define readbit(x, i) ((x >> i) & 1)
#define ins insert
#define sz(a) ((int)a.size())
#define fr(i, a, n) for (int i = a; i < n; i++)
#define rf(i, a, n) for (int i = n - 1; i >= a; i--)
const int mod = 1000000000 + 7;

/* END OF TEMPLATE*/

// ================= Solution =================//

int diff(string a, string b)
{
    if (sz(a) != sz(b))
        return INT_MAX;
    ll count = 0;
    fr(i, 0, sz(a))
    {
        if (a[i] != b[i])
            count++;
    }
    return count;
}

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    ll ans = INT_MAX;

    string new_s = "";
    fr(i, 0, n)
    {
        new_s.pb(s[i]);
        if (n % (i + 1) != 0)
            continue;
        ll m = n / sz(new_s);
        string temp = "";
        while (m--)
            temp += new_s;
        if (diff(s, temp) <= 1)
        {
            break;
        }
        if (diff(s, temp + new_s) <= 1)
        {
            break;
        }
    }
    ans = min(ans, ll(sz(new_s)));

    reverse(all(s));

    new_s = "";
    fr(i, 0, n)
    {
        new_s.pb(s[i]);
        if (n % (i + 1) != 0)
            continue;
        ll m = n / sz(new_s);
        string temp = "";
        while (m--)
            temp += new_s;
        if (diff(s, temp) <= 1)
        {
            break;
        }
        if (diff(s, temp + new_s) <= 1)
        {
            break;
        }
    }
    ans = min(ans, ll(sz(new_s)));

    cout << ans << endl;
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
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