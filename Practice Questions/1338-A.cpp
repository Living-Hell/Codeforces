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
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        
        vl maxi(n), mini(n);
        
        maxi[0] = v[0];
        mini[n-1] = v[n-1];
        
        for(int i=1; i<n; i++){
            maxi[i] = max(maxi[i-1],v[i]);
        }
        
        for(int i=n-2; i>=0; i--){
            mini[i] = min(mini[i+1],v[i]); 
        }
        
        ll diff = INT_MIN;
        for(int i=0; i<n; i++){
            diff = max(diff, abs(maxi[i] - mini[i]));
        }
        
        if(diff <= 0){
            cout<<0<<endl;
            return;
        }
        
        ll res = 0;
        while(diff>>=1) res++;
        
        cout<<res+1<<endl;
    }
     
    int main()
    {
        long long int t;        
        cin >> t;
        while(t--)
        {
            solve();
        }
     
        return 0;
    }