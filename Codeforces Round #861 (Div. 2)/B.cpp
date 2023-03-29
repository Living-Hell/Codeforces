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
            ll n,m;
            cin >> n >> m;
            vvl v(n,vl(m));
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++)
                    cin>>v[i][j];
            }
            
            ll ans=0;

            if(n==1){
                cout<<ans<<endl;
                continue;
            }

            
            vvl strip;

            for(int i=0; i<m; i++){
                vl temp;
                for(int j=0; j<n; j++){
                    temp.push_back(v[j][i]);
                }
                sort(temp.begin(),temp.end(), greater<int>());
                strip.push_back(temp);
            }

            for(int i=0; i<m; i++){
                ll mult = n-1, sub=0;
                for(int j=0; j<n; j++){
                    ans+= strip[i][j]*(mult-sub);
                    sub+=2;
                }
            }

            cout<<ans<<endl;            
        }
     
        return 0;
    }