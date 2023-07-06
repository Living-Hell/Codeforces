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
        cin >> n;
        vl v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        ll all = v[0];
        for (int i = 1; i < n; i++) all &= v[i];

        // vl nset;
        // for (int i = 0; i <= 32; i++) {
        //     if (all & (1 << i) == 0)
        //         nset.push_back(i);
        // }
        ll ans = 0;
        ll temp = v[0];
        for (int i = 0; i < n; i++) {
            temp &= v[i];
            if (temp == all) {
                ans++;
                if (i < n) temp = v[i + 1];
            }
        }
        cout << ans << endl;

    }

    return 0;
}