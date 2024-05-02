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
        ll n, a;
        cin >> n;
        vl v(n + 1, 0);
        map<int, int> mp;
        for (ll i = 0; i < n; i++) {
            cin >> a;
            if (a <= n)
                mp[a]++;
        }
        for (int i = 1; i <= n; i++) {
            if (mp[i] == 0) continue;
            for (int j = i; j <= n; j += i) {
                v[j] += mp[i];
            }
        }
        cout << *max_element(v.begin(), v.end()) << endl;
    }
    return 0;
}