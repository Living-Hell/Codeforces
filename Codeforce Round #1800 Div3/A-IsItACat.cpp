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
            string s;
            cin >> s;
            transform(s.begin(), s.end(), s.begin(), ::tolower);
            
            string s1="";
            s1+=s[0];

            for(int i=1; i<n; i++){
                if(s[i-1]!=s[i]){
                    s1+=s[i];
                }
            }

            if(s1=="meow") cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
     
        return 0;
    }