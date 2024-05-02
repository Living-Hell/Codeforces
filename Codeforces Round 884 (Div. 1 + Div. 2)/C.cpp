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
        vl v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        ll mx = *max_element(v.begin(), v.end());
        if (mx <= 0) {cout << mx << endl; continue;}
        ll sum = mx, ans1 = 0, ans2 = 0;
        for (int i = 0; i < n; i += 2) {
            if (v[i] >= 0) ans1 += v[i];
        }
        sum = max(ans1, sum);
        for (int i = 1; i < n; i += 2) {
            if (v[i] >= 0) ans2 += v[i];
        }
        sum = max(sum, ans2);
        cout << sum << endl;
    }

    return 0;
}