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
typedef unordered_map<ll, ll> umap;
// typedef map<ll, ll> map;
#define ldb long double
#define all(a) a.begin(), a.end()
#define pb push_back
#define fi first
#define se second
#define pc pop_back()
#define uniquev(v) v.resize(unique(all(v))-v.begin())
#define cntbit(v) __builtin_popcountll(v)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((1LL*a*b)/__gcd(a,b))
#define mask(x) (1LL<<(x))
#define readbit(x,i) ((x>>i)&1)
#define ins insert
#define sz(a) ((int)a.size())
#define fr(i, a, n) for(int i = a; i < n; i ++)
#define rf(i, a, n) for(int i = n-1; i >= a; i --)
const int mod = 1000000000 + 7;

/* END OF TEMPLATE*/

// ================= Solution =================//

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));
    fr(i, 0, n) {
        fr(j, 0, m) {
            cin >> v[i][j];
        }
    }

    unordered_map<char, bool> mp;
    fr(j, 0, m) {
        fr(i, 0, n) {
            if (v[i][j] == 'v' and mp['v'] == 0) {
                mp['v'] = 1;
                break;
            }
            else if (v[i][j] == 'i' and mp['i'] == 0 and mp['v'] == 1) {
                mp['i'] = 1;
                break;
            }
            else if (v[i][j] == 'k' and mp['k'] == 0 and mp['i'] == 1 and mp['v'] == 1) {
                mp['k' ] = 1;
                break;
            }
            else if (v[i][j] == 'a' and mp['a'] == 0 and mp['k'] == 1 and mp['i'] == 1 and mp['v'] == 1) {
                mp['a'] = 1;
                break;
            }
        }
    }

    if (mp['v'] and mp['i'] and mp['k'] and mp['a']) cout << "YES" << endl;
    else cout << "NO" << endl;

}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    long long int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}