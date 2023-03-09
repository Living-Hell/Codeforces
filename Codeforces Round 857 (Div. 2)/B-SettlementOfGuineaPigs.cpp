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
            vl v(n);
            for(int i=0; i<n; i++) cin>>v[i];

            vl ans;
            ans.push_back(0);
            int a1=0,count1=0;

            for(int i=0; i<n; i++){
                if(v[i] == 1){
                    a1++;
                    count1++;
                    ans.push_back(count1);
                }
                else{
                    if(count1>0){
                        count1 = ceil((a1)/2) +1;
                    }
                    ans.push_back(count1);
                }
            }

            cout<<*max_element(ans.begin(),ans.end())<<endl;
            
        }
     
        return 0;
    }