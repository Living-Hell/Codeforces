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
            string a,b;
            cin>>a>>b;

            int m = a.size();
            int n = b.size();

            if(a[m-1] == 'L' && b[n-1] != 'L')
                cout<<">"<<endl;
            else if(a[m-1] == 'M' && b[n-1] == 'S')
                cout<<">"<<endl;
            else if(a[m-1] == 'S' && b[n-1] == 'M')
                cout<<"<"<<endl;
            else if(a[m-1] == 'S' && b[n-1] == 'L')
                cout<<"<"<<endl;
            else if(a[m-1] == 'S' && b[n-1] == 'S'){
                if(n>m)
                    cout<<">"<<endl;
                else if(n==m)
                    cout<<"="<<endl;
                else 
                    cout<<"<"<<endl;
            }
            else if(a[m-1] == 'M' && b[n-1] == 'M')
                cout<<"="<<endl;
            else if(a[m-1] == 'M' && b[n-1] == 'L')
                cout<<"<"<<endl;
            else if(a[m-1] == 'L' && b[n-1] == 'L'){
                if(m == n)
                    cout<<"="<<endl;
                else if(m > n)
                    cout<<">"<<endl;
                else
                    cout<<"<"<<endl;
            }

        }
     
        return 0;
    }