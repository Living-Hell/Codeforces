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

void solve()
{
    ll n;
    cin >> n ;
    vl v(n - 1);
    set<int> st;
    st.insert(n);
    fr(i, 0, n - 1) {
        cin >> v[i];
        st.insert(i + 1);
    }

    ll t = 1, l = -1;
    auto it = st.find(v[0]);
    if (it != st.end()) {
        st.erase(it);
    }
    else {
        if (l == -1) {
            l = v[0];
        }
        else {
            t = 0;
        }
    }

    fr(i, 1, n - 1) {
        ll diff = v[i] - v[i - 1];
        auto it = st.find(diff);
        if (it != st.end()) {
            st.erase(it);
        }
        else {
            if (l == -1)
                l = diff;
            else {
                t = 0;
                break;
            }
        }
    }
    if (t == 0) {
        cout << "NO" << endl;
        return;
    }

    ll sum = 0;
    for (auto i : st) sum += i;

    if (l == -1) {
        ll tsum = n * (n + 1) / 2;
        if (tsum - v[n - 2] == sum)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else {
        if (sum == l)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
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