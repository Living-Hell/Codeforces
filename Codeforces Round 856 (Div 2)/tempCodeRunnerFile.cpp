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
            int n;
            cin >> n;
            vector<int> v(n);
            for(int i=0; i<n; i++) cin>>v[i];

            vector<int> ans(n,1);

            for(int i=1; i<n; i++){
                if(v[i] > ans[i-1]+1)
                    ans[i] = ans[i-1]+1;
                else if(v[i] == ans[i-1]+1){
                    if(v[i] == v[i-1])
                        ans[i] = ans[i-1]+1;
                    else 
                        ans[i] = ans[i-1];
                }
                else 
                    ans[i] = ans[i-1];
            }

            for(int i:ans) cout<<i<<" ";cout<<endl;
        }
     
        return 0;
    }