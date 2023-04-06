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
#define all(a) a.begin(),a.end()
#define pb push_back
#define sz(a) ((int)a.size())
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;        
    cin >> t;
    while(t--)
    {
        ll n,d;
        cin>>n>>d;
        string s;
        cin>>s;

        bool flag=1;
        for(int i=0; i<n; i++){
            ll rem = s[i]-'0';
            if(rem<d){
                s.insert(i,to_string(d));
                flag=0;
                break;
            }
        }
        if(flag) s+= to_string(d);
        cout<<s<<endl;
    }
    
    return 0;
}