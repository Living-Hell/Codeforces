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
    vl v(n);
    fr(i, 0, n) {
        cin >> v[i];
    }
    ll ans = INT_MAX;
    fr(i, 1, n) {
        ans = min(ans, v[i] - v[i - 1]);
    }
    if (ans < 0) cout << 0 << endl;
    else if (ans == 0) cout << 1 << endl;
    else cout << (ans / 2) + 1 << endl;
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