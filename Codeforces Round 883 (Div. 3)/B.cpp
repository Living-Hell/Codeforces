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
        vector<vector<char>> v(3, vector<char>(3));
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> v[i][j];
            }
        }

        char ans = '#';
        for (int i = 0; i < 3; i++) {
            if (v[i][0] == v[i][1] and v[i][1] == v[i][2]) {
                ans = v[i][0];
                break;
            }
            if (v[0][i] == v[1][i] and v[1][i] == v[2][i]) {
                ans = v[0][i];
                break;
            }
        }

        if (ans == '.') {
            cout << "DRAW" << endl;
            continue;
        }
        if (ans != '#') {
            cout << ans << endl;
            continue;
        }

        if (v[0][0] == v[1][1] and v[0][0] == v[2][2]) {
            ans =  v[0][0];
        }
        if (v[0][2] == v[1][1] and v[0][2] == v[2][0]) {
            ans =  v[0][2];
        }

        if (ans == '#' or ans == '.') cout << "DRAW" << endl;
        else cout << ans << endl;
    }

    return 0;
}