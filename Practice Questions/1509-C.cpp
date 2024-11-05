#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair < int, int > pii;
typedef pair < ll, ll > pll;
typedef pair < string, string > pss;
typedef vector < int > vi;
typedef vector < vi > vvi;
typedef vector < pii > vii;
typedef vector < ll > vl;
typedef vector < vl > vvl;
typedef unordered_map < ll, ll > umap;
// typedef map<ll, ll> map;
#define ldb long double
#define all(a) a.begin(), a.end()
#define pb push_back
#define fi first
#define se second
#define pc pop_back()
#define uniquev(v) v.resize(unique(all(v)) - v.begin())
#define cntbit(v) __builtin_popcountll(v)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b)((1 LL * a * b) / __gcd(a, b))
#define mask(x)(1 LL << (x))
#define readbit(x, i)((x >> i) & 1)
#define ins insert
#define sz(a)((int) a.size())
#define fr(i, a, n) for (int i = a; i < n; i++)
#define rf(i, a, n) for (int i = n - 1; i >= a; i--)
const int mod = 1000000000 + 7;

/* END OF TEMPLATE*/

// ================= Solution =================//
ll dp[2005][2005];
ll helper(vl &v, ll l, ll r){
    if(dp[l][r] != -1) return dp[l][r];
    if(l == r) return 0;
    
    ll res = v[r] - v[l] + min(helper(v,l+1,r), helper(v,l,r-1));
    
    return dp[l][r] = res;
}
void solve()
{
    ll n;
    cin >> n;
    vl v(n);
    fr(i,0,n) cin>>v[i];
    sort(all(v));
    memset(dp,-1,sizeof(dp));
    cout<<helper(v,0,n-1)<<endl;
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    // long long int t;
    // cin >> t;
    // while (t--)
    // {
        solve();
    // }
    return 0;
}