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
     
    int main()
    {
        ll n,l,r,x;
        cin>>n>>l>>r>>x;
        
        vl v(n);
        for(ll i=0; i<n; i++) 
            cin>>v[i];
            
        ll res = 0;
        
        for(int mask = 0; mask < (1<<n); mask++){
            ll count=0, easy = INT_MAX, diff = INT_MIN, sum=0;
            for(int i=0; i<n; i++){
                if(mask&(1<<i)){
                    count++;
                    easy = min(easy,v[i]);
                    diff = max(diff,v[i]);
                    sum += v[i];
                }
            }
            if(count >= 2 and sum >= l and sum <= r and (diff-easy) >= x)
                res++;
        }
        
        cout<<res;
     
        return 0;
    }