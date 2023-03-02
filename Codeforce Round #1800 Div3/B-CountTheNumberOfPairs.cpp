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
            int n,k;
            cin >> n >> k;
            string s;
            cin >> s;

            vector<int> a(26,0);
            vector<int> u(26,0), l(26,0);

            for(int i=0; i<n; i++){
                if(s[i]>='a' && s[i]<='z'){
                    a[s[i]-'a']++;
                    l[s[i]-'a']++;
                }
                else{    
                    a[s[i]-'A']--;
                    u[s[i]-'A']++;
                }
            }

            int extra=0, hurls=0;

            for(int i:a)
                extra+= abs(i)/2;
                
            extra = min(k,extra);

            for(int i=0; i<26; i++){
                hurls+= min(l[i],u[i]);
            }

            if(extra>0) hurls+=extra;
            cout<<hurls<<endl;

        }
     
        return 0;
    }