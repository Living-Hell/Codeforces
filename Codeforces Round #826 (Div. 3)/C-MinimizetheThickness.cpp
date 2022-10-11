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
            vector<int> v(n);

            for(int i=0; i<n; i++)
                cin >> v[i];

            int arsum=0, ans = INT_MAX;

            for(int i=0; i<n; i++)
                arsum += v[i];
            
            int maxelm = *max_element(v.begin(), v.end());

            int thicc = INT_MAX;

            for(int i=1; arsum/i >= maxelm; i++){
                arsum/=i;
                for(int j=0; i<n; j++){
                    int tempsum = v[j];
                    for(int k=i+1; k<n; k++){
                        tempsum += v[k];
                        if(tempsum == arsum){
                            thicc = k-j;
                            ans = min(thicc, ans);
                            j = k+1;
                        }
                        else break;
                    }
                }
            }

            cout<<ans<<endl;

        }
     
        return 0;
    }