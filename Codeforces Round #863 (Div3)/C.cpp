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
        ll n;
        cin>>n;
        vl v(n-1);
        for(int i=0; i<n-1; i++) cin>>v[i];

        vl ans;
        ans.push_back(v[0]);


        for(int i=0; i<n-2; i++){
            ans.push_back(min(v[i],v[i+1]));
        }
        
        ans.push_back(v[n-2]);

        for( ll i:ans) cout<<i<<" ";cout<<endl;

    }
    
    return 0;
}