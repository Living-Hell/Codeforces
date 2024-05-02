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
typedef map<ll, ll> map;
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
void fmx(vl &v, int n, vii &ans) {
    for (int i = 0; i < 10; i++) {
        ans.pb({n, n});
        v[n - 1] *= 2;
    }
    for (int i = 0; i < n - 1; i++) {
        v[i] += v[n - 1];
        ans.pb({i + 1, n});
        v[n - 1] *= 2;
        ans.pb({n, n});
    }
}

void fmn(vl &v, int n, vii &ans) {
    for (int i = 0; i < 10; i++) {
        ans.pb({1, 1});
        v[0] *= 2;
    }
    for (int i = n - 1; i > 0; i--) {
        v[i] += v[0];
        ans.pb({i + 1, 0});
        v[0] *= 2;
        ans.pb({1, 1});
    }
}

void solve()
{
    ll n;
    cin >> n ;
    vl v(n);
    fr(i, 0, n) {
        cin >> v[i];
    }
    vii ans;

    int maxi = *max_element(v.begin(), v.end());
    int mini = *min_element(v.begin(), v.end());

    if (n == 1) {
        cout << "0" << endl;
        return;
    }
    if (maxi == mini) {
        cout << "0" << endl;
        return;
    }

    if (mini == 0) {
        cout << n - 1 << endl;
        fr(i, 0, n - 1)
        cout << i + 2 << " " << i + 1 << endl;
        return ;
    }

    if (maxi == 0) {
        cout << n - 1 << endl;
        rf(i, 0, n - 1)
        cout << i + 1 << " " << i + 2 << endl;
        return;
    }

    int tp = 0, tc = 0;
    fr(i, 0, n) {
        if (v[i] >= 0) tp++;
        else tc++;
    }

    if (maxi >= abs(mini)) {
        int l = 0;
        fr(i, 0, n) {
            if (v[i] == maxi)
                l = i + 1;
        }


        fr(i, 0, n) {
            if (maxi != v[i] and v[i] < 0) {
                ans.pb({i + 1, l});
                v[i] += maxi;
            }
        }

        fr(i, 0, n - 1) ans.pb({i + 2, i + 1});
    }
    else {
        int l = 0;
        fr(i, 0, n) {
            if (v[i] == mini)
                l = i + 1;
        }


        fr(i, 0, n) {
            if (mini != v[i] and v[i] > 0) {
                ans.pb({i + 1, l});
                v[i] += mini;
            }
        }

        rf(i, 0, n - 1) ans.pb({i + 1, i + 2});
    }
    // for (auto i : v) cout << i << " "; cout << endl << endl;
    cout << ans.size() << endl;
    for (auto i : ans) {
        cout << i.first << " " << i.second << endl;
    }



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