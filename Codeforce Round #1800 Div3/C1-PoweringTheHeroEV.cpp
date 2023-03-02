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
            cin>>n;
            vl a(n);
            for(int i=0; i<n; i++) cin>>a[i];

            priority_queue<ll> pq;
            ll ans=0;

            for(int i=0; i<n; i++){
                if(a[i] == 0){
                    if(!pq.empty()){
                        ans+= pq.top();
                        pq.pop();
                    }
                }
                else{
                    pq.push(a[i]);
                }
            }

            cout<<ans<<endl;
        }
     
        return 0;
    }