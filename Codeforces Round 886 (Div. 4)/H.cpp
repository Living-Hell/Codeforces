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

void helper(vector<vector<pll>> &adj, int ind, int par, vector<bool> &vis, bool &flag, vl &dist) {
    vis[ind] = 1;
    for (auto i : adj[ind]) {
        ll sldr = i.first, dis = i.second;
        if (sldr != par) {
            if (!vis[sldr]) {
                dist[sldr] = dist[ind] + dis;
                helper(adj, sldr, ind, vis, flag, dist);
                if (!flag) return;
            }
            else if (dist[sldr] != dist[ind] + dis) {
                flag = 0;
                return;
            }
        }
    }
}

void solve()
{
    ll n, m, a, b, d;
    cin >> n >> m;
    vector<vector<pll>> adj(n);
    fr(i, 0, m) {
        cin >> a >> b >> d;
        adj[a - 1].push_back({b - 1, d});
        adj[b - 1].push_back({a - 1, -d});
    }
    vl dist(n);
    vector<bool> vis(n, 0);
    bool flag = 1;
    fr(i, 0, n) {
        if (!vis[i]) {
            dist[i] = 0;
            helper(adj, i, -1, vis, flag, dist);
            if (!flag) break;
        }
    }
    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;

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