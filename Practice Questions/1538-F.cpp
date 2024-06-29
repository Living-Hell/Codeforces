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
        ll l,r;
        cin>>l>>r;
        
        ll res = 0;
        while(r>0){
            res += abs(r-l);
            l/=10;
            r/=10;
        }
        cout<<res<<endl;
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