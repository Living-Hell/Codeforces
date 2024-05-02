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
        ll n, m, k;
        cin >> n >> m >> k;
        ll x, y;
        cin >> x >> y;
        vl v(k);
        for (int i = 0; i < k; i++) {
            ll xi, yi;
            cin >> xi >> yi;
            v[i] = (abs(x - xi) + abs(y - yi));
        }
        bool flag = 0;
        for (auto i : v) {
            if (i % 2 == 0) {
                flag = 1;
                break;
            }
        }
        if (flag) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}