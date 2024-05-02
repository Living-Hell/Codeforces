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
typedef unordered_map<ll, ll> umap;
typedef map<ll, ll> map;
typedef vector<vl> vvl;
#define all(a) a.begin(), a.end()
#define pb push_back
#define sz(a) ((int)a.size())
#define fr(i, a, n) for(int i = a; i < n; i ++)
#define rf(i, a, n) for(int i = n-1; i >= a; i --)
const int mod = 1000000000 + 7;

void solve()
{
    ll n;
    cin >> n;
    vector<pll> v(n);
    umap ld, rd, lr, ud;
    fr(i, 0, n) {
        cin >> v[i].first >> v[i].second;
        ll l = v[i].first + v[i].second;
        ll r = v[i].second - v[i].first;
        lr[v[i].first]++;
        ud[v[i].second]++;
        ld[l]++;
        rd[r]++;
    }
    ll ans = 0;
    for (auto i : ud)
        if (i.second > 1)
            ans += (i.second * (i.second - 1));
    for (auto i : lr)
        if (i.second > 1)
            ans += (i.second * (i.second - 1));
    for (auto i : ld)
        if (i.second > 1)
            ans += (i.second * (i.second - 1));
    for (auto i : rd)
        if (i.second > 1)
            ans += (i.second * (i.second - 1));
    cout << ans << endl;
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