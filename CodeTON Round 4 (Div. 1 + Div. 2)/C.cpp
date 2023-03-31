//WA

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
        ll n,c,d;
        cin>>n>>c>>d;
        vl v(n);
        for(int i=0; i<n; i++)
            cin>>v[i];

        unordered_map<ll,int> mp;
        for(ll i:v) mp[i]++;

        ll ans=0;
        for(auto i:mp) ans+= (i.second-1)*c;

        cout<<" dup "<<ans<<endl;

        ll countm=0, countr=0;

        sort(v.begin(),v.end());
        vl a;
        a.push_back(v[0]);
        for(int i=1; i<n; i++){
            if(a.back()!=v[i])
                a.push_back(v[i]);
        }
        // cout<<"Vec; ";
        // for(ll i:a) cout<<i<<" ";cout<<endl;

        if(a[0] !=1){ 
            ans+= d;
            a.insert(a.begin(), 1);
        };

        for(int i=0; i<n; i++){
            ll cost_add = (a[i]-i-1)*d;
            ll cost_remove = (a.size()-i);

            if(cost_add<cost_remove){ 
                ans+= cost_add;
                // cout<<" add "<<a[i]<<" "<<(a[i]-i-1)<<" "<<ans<<endl;
            }
            else{
                ans+= cost_remove;
                break;
                // cout<<" rem "<<ans<<endl;
            }
        }
        cout<<ans<<endl;    
        
    }
    
    return 0;
}

//1 2 4 5 6 7 8 9