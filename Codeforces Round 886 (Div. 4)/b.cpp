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
        ll n;
        cin >> n;
        vector<pll> v(n);
        for (int  i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
        ll ans = -1, qual = 0;
        for (int i = 0; i < n; i++) {
            if (v[i].second > qual and v[i].first <= 10) {
                qual = v[i].second;
                ans = i + 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}