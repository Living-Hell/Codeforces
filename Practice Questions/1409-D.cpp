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
    
    ll getSum(ll n){
        ll res = 0;
        while(n>0){
            res += n%10;
            n /= 10;
        }
        return res;
    }
    
    void solve(){
        ll n,s;
        cin>>n>>s;
        
        ll sum = getSum(n);
        ll res = 0, mult = 1;
        
        while(sum > s and n>1){
            ll dig = n%10;
            n /= 10;
            if(dig != 0){
                n++;
                sum = getSum(n);
                res = res + mult*(10-dig);
            }
            mult *= 10;
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