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
    
    void solve(){
        ll n;
        cin>>n;
        
        vl v(n);
        ll sum = 0, maxm = INT_MIN;
        for(int i=0; i<n; i++){
            cin>>v[i];
            sum += v[i];
            maxm = max(v[i],maxm);
        } 
        
        if(sum%2 == 0 and maxm <= (sum-maxm)) 
            cout<<"YES";
        else 
            cout<<"NO";
        
    }
     
    int main()
    {
        solve();
        return 0;
    }