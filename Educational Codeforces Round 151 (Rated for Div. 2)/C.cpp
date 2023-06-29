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
        string s;
        ll m;
        string l,r;
        cin>>s>>m>>l>>r;
        size_t x=0;
        for(int i=0; i<m; i++){
            size_t best = 0;
            for(int j = l[i]; j<= r[i]; j++){
                size_t d = s.find_first_of(j,x);
                best = max(best,d);
            }
            x = best;
            if(x!= string::npos) ++x;
        }
        cout<<(x == string::npos ? "YES" : "NO")<<endl; 
    }
    
    return 0;
}