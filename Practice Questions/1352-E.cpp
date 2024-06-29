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
    
    bool helper(vl v, ll st, ll end, ll target){
        ll sum = 0;
        ll i = st, j = st;
        while(j<=end){
            sum += v[j];
            if(sum == target and j-i > 0){
                return 1;
            }
            else if(sum > target){
                // cout<<target<<" : "<<sum<<" ";
                while(sum > target and i<j){
                    sum -= v[i++];
                    // cout<<sum<<" ";
                }
                if(sum == target and j-i > 0){
                    return 1;
                }
                // cout<<endl;
            }
            // cout<<j<<" "<<sum<<" : ";
            j++;
        }
        return 0;
        
    }
    
    void solve(){
        ll n;
        cin>>n;
        
        vl v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        
        ll res=0;
        
        for(int i=0; i<n; i++){
            if(helper(v,0,i-1,v[i]) or helper(v,i+1,n-1,v[i])){
                res++;
                // cout<<v[i]<<" ";
            }
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