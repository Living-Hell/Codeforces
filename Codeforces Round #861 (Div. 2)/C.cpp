    // Wrong Solution
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
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        long long int t;        
        cin >> t;
        while(t--)
        {
            ll l,r;
            cin>>l>>r;
            ll ans;

            
            ll st = max(l,r-100), tans=10;
            for(int i=st; i<=r; i++){
                vl v;
                ll temp = i;
                while(temp>0){
                    v.push_back(temp%10);
                    temp=temp/10;
                }
                sort(v.begin(),v.end());
                if(v[v.size()-1]-v[0]<tans){
                    tans = v[v.size()-1]-v[0];
                    ans = i;
                }
            }
            
            cout<<ans<<endl;
        }
     
        return 0;
    }