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
            cin>>n>>m;
            ll t = pow(2,62);

            cout<<m*n<<endl;
            for(int i=1; i<=n; i++){
                for(int j=1; j<=m; j++){
                    cout<<t+((i-1)*n + j)<<" ";
                }
                cout<<endl;
            }
        }
     
        return 0;
    }