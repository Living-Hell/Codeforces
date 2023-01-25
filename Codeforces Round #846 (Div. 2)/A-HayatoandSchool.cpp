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
            vector<int> v(n);
            for(int i=0; i<n; i++){
                cin>>v[i];
            }
            vector<int> odd,even;

            for(int i=0; i<n; i++){
                if(v[i]%2==0) even.push_back(i+1);
                else odd.push_back(i+1);
            }

            if(odd.size()>=3){ 
                cout<<"YES"<<endl;
                cout<<odd[0]<<" "<<odd[1]<<" "<<odd[2]<<endl;
            }
            else if(even.size()>=2 && odd.size()>=1){ 
                cout<<"YES"<<endl;
                cout<<odd[0]<<" "<<even[0]<<" "<<even[1]<<endl;
            }
            else cout<<"NO"<<endl;
        }
     
        return 0;
    }