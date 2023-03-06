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
            vl v(n);   
            for(int i=0; i<n; i++) cin >> v[i];

            if(v[0]==1) v[0]++;

            for(int i=1; i<n; i++){
                if(v[i] == 1) v[i]++;
                if(v[i]%v[i-1]==0){
                    v[i]++;
                }
            }

            for( ll i:v) cout<<i<<" ";cout<<endl;
        }
     
        return 0;
    }

    