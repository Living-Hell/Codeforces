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
#define all(a) a.begin(), a.end()
#define pb push_back
#define sz(a) ((int)a.size())

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    long long int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vl v(n);
        unordered_map<ll, vl> mp;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (mp.find(v[i]) == mp.end()) mp[v[i]].push_back(-1);
            mp[v[i]].push_back(i);
        }
        ll ans = 1e7;
        for (auto i : mp) {
            i.second.pb(n);
            vl ind = i.second;
            ll temp = 0;
            vl ix;
            for (int j = 1; j < ind.size(); j++) {
                ix.pb(ind[j] - ind[j - 1]);
            }
            auto id = max_element(ix.begin(), ix.end());
            ll mx = *id;
            ix.erase(id);
            ix.pb(mx / 2);
            ix.pb(ceil(mx / 2.0));
            temp = *max_element(ix.begin(), ix.end());
            ans = min(ans, temp);
        }
        cout << ans - 1 << endl;
    }

    return 0;
}