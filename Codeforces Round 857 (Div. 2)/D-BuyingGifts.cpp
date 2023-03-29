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
    typedef vector<pll> vll;
    
    int maxDiff(vll v, vl f1, vl f2, ll dept, ll maxm){
        if(dept == v.size()) return maxm;

        f1.push_back(v[dept].first);
        if(f1.size()>0 && f2.size()>0)
            return maxm = max(maxm, *max_element(f1.begin(),f1.end())-*max_element(f2.begin(),f2.end()));
        maxDiff(v,f1,f2,dept+1,maxm);
        f1.pop_back();

        f1.push_back(v[dept].second);
        if(f1.size()>0 && f2.size()>0)
            return maxm = max(maxm, *max_element(f1.begin(),f1.end())-*max_element(f2.begin(),f2.end()));
        maxDiff(v,f1,f2,dept+1,maxm);
        f1.pop_back();

        f2.push_back(v[dept].first);
        if(f1.size()>0 && f2.size()>0)
            return maxm = max(maxm, *max_element(f1.begin(),f1.end())-*max_element(f2.begin(),f2.end()));
        maxDiff(v,f1,f2,dept+1,maxm);
        f2.pop_back();

        f2.push_back(v[dept].second);
        if(f1.size()>0 && f2.size()>0)
            return maxm = max(maxm, *max_element(f1.begin(),f1.end())-*max_element(f2.begin(),f2.end()));
        maxDiff(v,f1,f2,dept+1,maxm);
        f1.pop_back();
        return maxm;
    }

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

            vll v;
            for(int i=0; i<n; i++){
                ll a,b;
                cin>>a>>b;
                v.push_back({a,b});
            }

            vl f1,f2;

            cout<<maxDiff(v,f1,f2,0,INT_MIN);
        }
     
        return 0;
    }