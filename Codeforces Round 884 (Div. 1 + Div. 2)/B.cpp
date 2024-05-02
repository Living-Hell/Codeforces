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
        if (n == 1) cout << 1 << endl;
        else if (n == 2) cout << 2 << " " << 1 << endl;
        else {
            vector<int> v(n, -1);
            v[0] = 3;
            v[n - 1] = 2;
            v[n / 2] = 1;
            int count = 4;
            for (int i = 1; i < n - 1; i++) {
                if (i != n / 2) {
                    v[i] = count;
                    count++;
                }
            }
            for (int i : v) cout << i << " "; cout << endl;
        }

    }

    return 0;
}