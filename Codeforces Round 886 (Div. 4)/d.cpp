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
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        vl v1;
        v1.push_back(0);
        for (int i = 1; i < n; i++) {
            if (v[i] - v[i - 1] > k ) {
                v1.push_back(i);
            }
        }
        v1.push_back(n);
        // for (int i : v1) cout << i << " "; cout << endl;
        ll ans = 0;
        for (int i = 1; i < v1.size(); i++) {
            ans = max(ans, v1[i] - v1[i - 1] );
        }
        cout << n - ans << endl;
    }

    return 0;
}