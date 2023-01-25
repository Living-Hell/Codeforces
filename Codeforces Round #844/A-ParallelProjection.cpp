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
        ll t;        
        cin >> t;
        while(t--)
        {
            ll w,d,h;
            cin>>w>>d>>h;
            ll a,b,f,g;
            cin>>a>>b>>f>>g;

            ll diffx = abs(b-g);
            ll c1 = a + f + diffx;
            ll c2 = (w-a) + (w-f) + diffx;
            c1 = min(c1,c2);

            ll diffy = abs(a-f);
            ll c3 = b + g + diffy;
            ll c4 = d - b + d - g + diffy;
            c3 = min(c3,c4);

            cout<<min(c1,c3)+h<<endl;

        }
        return 0;
    }