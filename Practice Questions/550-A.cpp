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
        string s;
        cin>>s;
        
        ll n = s.size();
        
        bool found = 0;
        
        ll ind=-1;
        for(int i=0; i<n-1; i++){
            if(s[i] == 'A' and s[i+1] == 'B'){
                ind = i+2;
                break;
            }
        }
        
        if(ind != -1){
            for(int i=ind; i<n-1; i++){
                if(s[i] == 'B' and s[i+1] == 'A'){
                    found = 1;
                    break;
                }
            }
        }
        
        ind=-1;
        for(int i=0; i<n-1; i++){
            if(s[i] == 'B' and s[i+1] == 'A'){
                ind = i+2;
                break;
            }
        }
        
        if(ind != -1){
            for(int i=ind; i<n-1; i++){
                if(s[i] == 'A' and s[i+1] == 'B'){
                    found = 1;
                    break;
                }
            }
        }
        
        if(found) cout<<"YES";
        else cout<<"NO";
     
        return 0;
    }