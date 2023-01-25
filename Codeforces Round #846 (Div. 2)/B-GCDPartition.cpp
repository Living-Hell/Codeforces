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

    bool isPrime(int n)
    {
        if (n <= 1)
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }
     
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

            int tsum=0;
            for(int i:v) tsum+= i;

            if(!isPrime(tsum)) cout<<1<<endl;
            else{
                vector<int> factors;
                for(int i=2; i*i<tsum; i++){
                    if(tsum%i==0){
                        factors.push_back(i);
                        factors.push_back(tsum/i);
                    }
                }
                for(int j=factors.size()-1; j>=0; j++){
                    int sum=0, check=1;
                    for(int i=0; i<n; i++){
                        if(sum < factors[j]) sum+= v[i];
                        else if(sum%factors[j]==0){
                            sum=0;
                            continue;
                        }
                        else{
                            check = 0;
                            break;
                        }
                    }
                    if(check){
                        cout<<factors[j]<<endl;
                        break;
                    }
                }
            }
            
        }
     
        return 0;
    }