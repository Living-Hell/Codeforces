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
        vector<vector<char>> v(8, vector<char>(8));
        string ans;
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                cin >> v[i][j];
                if (v[i][j] != '.') {
                    ans.push_back(v[i][j]);
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}