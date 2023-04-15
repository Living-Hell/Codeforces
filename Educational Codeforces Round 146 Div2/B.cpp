//INCOMPLETE

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
        ll a,b;
        cin>>a>>b;

        ll hcf = __gcd(a,b);
        ll ans=0;
        if(a>b) swap(a,b);
        ans= (a/hcf) + hcf-1;

        ll fact;
        for(ll i=hcf; i*i<b; i++){
            if(b%i==0)
        }

    }
    
    return 0;
}