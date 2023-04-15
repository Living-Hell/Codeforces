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
        string s;
        cin>>s;

        ll n = s.size(), count=0, cons=0;
        s+=s;

        for(int i=0; i<s.size(); i++){
            if(s[i] == '1'){
                cons++;
            }
            else{
                count = max(count,cons);
                cons=0;
            }            
        }
        count = max(count,cons);
        // cout<<count<<endl;

        if(count==n*2){
            cout<<n*n<<endl;
            continue;
        }
        // else if(count==1 and s[0]=='1' and s[n-1] =='1'){
        //     cout<<2<<endl;
        //     continue;
        // }

        ll ans=0;
        for(ll i=count, j=1; i>0; i--, j++ ) ans = max(ans,i*j);
        cout<<ans<<endl;
    }
    
    return 0;
}