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

struct compare
{
    bool operator()(vl a, vl b)
    {
        if ( a[0] == b[0]) return a[1] > b[1];
        return a[0] < b[0];
    }
};

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
        ll n = 0, m = 0, h = 0;
        cin >> n >> m >> h;
        vvl v(n, vl(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> v[i][j];
            }
            sort(v[i].begin(), v[i].end());
            for (int j = 1; j < m; j++) {
                v[i][j] += v[i][j - 1];
            }
        }
        // ll temp;
        // priority_queue<vl, vvl, compare> pq;
        // for (int i = 0; i < n; i++) {
        //     int j = 0;
        //     ll sum = 0;
        //     for (j = 0; j < m; j++) {
        //         if (v[i][j] > h) {
        //             break;
        //         }
        //         else
        //             sum += v[i][j];
        //     }
        //     if (i == 0)
        //         temp = sum;
        //     pq.push({j, sum});
        // }

        pll rud;
        vector<pll> f;
        for (int i = 0; i < n; i++) {
            ll cur = 0, time = 0, j = 0;
            while (j < m and v[i][j] <= h) {
                time += v[i][j];
                cur++;
                j++;
            }
            f.push_back({cur, time});
        }
        rud = f[0];

        sort(f.begin(), f.end(), [](pll a, pll b) { if (a.first == b.first) return a.second < b.second; return a.first > b.first;});


        ll ans = 1;
        // while (!pq.empty()) {
        //     auto i = pq.top();
        //     pq.pop();
        //     cout << i[0] << " " << i[1] << endl;
        //     if (i[1] == temp) {
        //         break;
        //     }
        //     ans++;
        // }
        for (int i = 0; i < f.size(); i++) {
            // cout << f[i].first << " " << f[i].second << endl;
            if (f[i] == rud) {
                ans = i + 1;
                break;
            }
        }
        cout << ans << endl;

    }

    return 0;
}