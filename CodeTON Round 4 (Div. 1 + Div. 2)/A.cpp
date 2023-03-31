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
        vl v(n);
        for(int i=0; i<n; i++) cin>>v[i];

        bool ans=0;
        for(int i=0; i<n; i++){
            if(v[i]<=i+1){
                ans=1;
                break;
            }
        }

        if(ans)  cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    
    return 0;
}