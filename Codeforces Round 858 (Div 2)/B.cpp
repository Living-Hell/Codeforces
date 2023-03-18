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
            ll n;
            cin>>n;
            vl v(n);
            ll count0=0,count1=0,count=0,count2=0;
            for(int i=0; i<n; i++){
                cin>>v[i];
                if(v[i]==0) count0++;
                else{
                    count++;
                    if(v[i]==1) count1++;
                    else count2++;
                }
            }
            if(count0>= count+2){
                if(count1==0)cout<<1<<endl;
                else if(count2>0) cout<<1<<endl;
                else cout<<2<<endl;
            }
            else 
                cout<<0<<endl;
        }
     
        return 0;
    }