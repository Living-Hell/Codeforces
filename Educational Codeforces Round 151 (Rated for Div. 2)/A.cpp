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
        ll n,k,x;
        cin>>n>>k>>x;
        vector<vector<int>> v(k, vector<int>());
        if(x!=1){
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for(int i=0; i<n; i++) cout<<1<<" ";
            cout<<endl;
        }
        else if(x==1 and k==2 and n%2==0){
            cout<<"YES"<<endl;
            cout<<n/2<<endl;
            for(int i=0; i<(n/2); i++) cout<<2<<" ";
            cout<<endl;
        }

        else if(x==1 and k>=3 and n>=2){
            cout<<"YES"<<endl;
            if(n%2==0){
                cout<<n/2<<endl;
                for(int i=0; i<(n/2); i++) cout<<2<<" ";
                cout<<endl;
            }
            else{
                n-=3;
                cout<<(n/2)+1<<endl;
                cout<<3<<" ";
                for(int i=0; i<(n/2); i++) cout<<2<<" ";
                cout<<endl;
            }
        }
        else 
            cout<<"NO"<<endl;


    }
    
    return 0;
}