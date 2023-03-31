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
        
        if(n%2==0){
            cout<<-1<<endl;
            continue;
        }

        vl ans;

        while(n>1){
            ll z = n/2;
            if(z%2==0){ 
                ans.push_back(1);
                n = z+1;
            }
            else{
                ans.push_back(2);
                n = z;
            }            
        }
        cout<<ans.size()<<endl;
        reverse(ans.begin(),ans.end());
        for(int i:ans) cout<<i<<" ";cout<<endl;
    }
    
    return 0;
}