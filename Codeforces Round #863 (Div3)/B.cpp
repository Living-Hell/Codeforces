#include<bits/stdc++.h>
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
#define all(a) a.begin(),a.end()
#define pb push_back
#define sz(a) ((int)a.size())
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;        
    cin >> t;
    while(t--)
    {
        ll n, x1, y1, x2, y2;
        cin>>n>>x1>>y1>>x2>>y2;

        double m1,m2;
        m1 = m2 = n/2 + 0.5;

        ll r1 = max(abs(m1-x1), abs(m2-y1));
        ll r2 = max(abs(m1-x2), abs(m2-y2));
        cout<<abs(r1-r2)<<endl;
    }
    
    return 0;
}