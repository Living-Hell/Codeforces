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

            if(n == 3)
                cout<<"-1"<<endl;
            
            else{

            if(n%2 == 0){
                for(int i=n; i>=1; i--)
                    cout<<i<<" ";
                cout<<endl;
            }

            else{
                for(int i=n; i>=n - (n/2) + 1; i--){
                    cout<<i<<" ";
                }
                for(int i=1; i<= n - (n/2); i++)
                    cout<<i<<" ";
                cout<<endl;
            }

            }
        }
     
        return 0;
    }