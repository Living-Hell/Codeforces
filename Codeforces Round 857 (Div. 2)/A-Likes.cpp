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
            for(int i=0; i<n; i++) cin>>v[i];

            vl mx = v;
            sort(mx.begin(),mx.end(),greater<int>());

            vl ans1,ans2;

            int a1=0;
            for(int i=0; i<n; i++){
                if(mx[i]>0)
                    a1++;
                else
                    a1--;
                ans1.push_back(a1);
            }

            vl mn1,mn2;
            for(int i:v){
                if(i<0) mn1.push_back(i);
                else mn2.push_back(i);
            }

            sort(mn1.begin(),mn1.end());
            sort(mn2.begin(),mn2.end());

            int sz = mn1.size();

            for(int i=0; i<sz; i++){
                ans2.push_back(1);
                ans2.push_back(0);
            }

            sz = n - 2*sz;

            for(int i=1; i<=sz; i++) ans2.push_back(i);

            for(int i:ans1) cout<<i<<" ";cout<<endl;
            for(int i:ans2) cout<<i<<" ";cout<<endl;

        }
     
        return 0;
    }