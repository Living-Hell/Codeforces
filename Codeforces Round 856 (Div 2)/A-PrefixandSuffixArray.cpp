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
            vector<string> v(2*n-2);
            vector<string> temp;
            for(int i=0; i<2*n-2; i++){
                cin>>v[i];
                if(v[i].size() == n-1){
                    temp.push_back(v[i]);
                }
            }

            reverse(temp[0].begin(),temp[0].end());
            if(temp[0] == temp[1]) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            
            
        }
     
        return 0;
    }