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
    ll n, k;
    cin >> n >> k;
    if (k > 37) {
        cout << 0 << endl;
        return;
    }
    vl pc(36, 1);
    ll fin = 0;
    fr(i, 2, 36) pc[i] = pc[i - 1] + pc[i - 2];
    ll a = pc[k - 3], b = pc[k - 2];
    fr(i, 0, n + 1) {
        if ((n - b * i) >= 0 and (n - b * i) % a == 0) {
            if (i >= (n - b * i) / a)
                fin++;
        }
    }
    cout << fin << endl;
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