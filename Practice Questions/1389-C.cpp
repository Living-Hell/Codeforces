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
    
    int helper(string s, int i, int j){
        ll res = 0;
        for(char c:s){
            if((c - '0') == i){
                res++;
                swap(i,j);
            }
        }
        if(i!=j and res&1) res--;
        return res;
    }
    
    void solve(){
        string s;
        cin>>s;
        ll n = s.size();
        
        if(n<=2){
            cout<<0<<endl;
            return;
        }
        ll res = 0;
        
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                res = max(res,1ll*helper(s,i,j));
            }
        }
        
        cout<<n - res<<endl;
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