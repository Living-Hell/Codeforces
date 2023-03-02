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
            int count=0;

            for(int i=0; i<n-1; i++){
                if(i+2<n && s[i] == s[i+2]) continue;
                else{ 
                    count++;
                }
            }
            cout<<count<<endl;
        }
     
        return 0;
    }