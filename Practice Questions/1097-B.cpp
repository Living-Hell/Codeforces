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
        ll n;
        cin>>n;
        
        vl v(n);
        for(int i=0; i<n; i++)
            cin>>v[i];
        
        bool flag = 0;
        
        for(int mask = 0; mask < (1<<n); mask++){
            ll sum1 = 0, sum2 = 0;
            for(int i=0; i<n; i++){
                if(mask&(1<<i)){
                    sum1 += v[i];
                }
                else 
                    sum2 += v[i];
            }
            ll res = abs(sum1-sum2);
            if(res == 0 or res%360 == 0){
                flag = 1;
                break;
            }
            
        }
        
        if(flag) cout<<"YES";
        else cout<<"NO";
     
        return 0;
    }