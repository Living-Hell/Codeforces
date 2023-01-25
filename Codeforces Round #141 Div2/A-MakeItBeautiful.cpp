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
        ll t;        
        cin >> t;
        while(t--)
        {
            int n;
            cin >> n;
            vi v(n);

            for(int i=0; i<n; i++)
                cin >> v[i];
            
            int temp = 1;
            for(int i=0; i<n; i++){
                if(v[i] == v[i-1])
                    temp++;
            }

            if(temp == n && n>1) cout<<"NO"<<endl;
            else{
                cout<<"YES"<<endl;
                for(int i=0; i<n/2; i++){
                    cout<<v[i]<<" "<<v[n-i-1]<<" ";
                }
                if(n%2==1) cout<<v[n/2];
                cout<<endl;
            }

        }
     
        return 0;
    }