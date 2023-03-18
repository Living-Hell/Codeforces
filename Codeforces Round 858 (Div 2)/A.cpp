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
            ll a,b,c,d;
            cin>>a>>b>>c>>d;
            if(d < c + b - a || d<b){
                cout<<-1<<endl;
                continue;
            }
            ll ans=0;
            ans+= abs(d-b);
            ans+= abs(a + d - b - c);
            cout<<ans<<endl;
        }
     
        return 0;
    }