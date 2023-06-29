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
    while(t--){
        ll ax,ay,bx,by,cx,cy;
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        ll diffbx = ax - bx;
        ll diffcx = ax - cx;
        ll diffby = ay - by;
        ll diffcy = ay - cy;
        ll ans = 1;
        if(diffbx*diffcx > 0){
            ans += min(abs(diffbx),abs(diffcx));
        }
        if(diffby*diffcy > 0){
            ans += min(abs(diffby),abs(diffcy));
        }
        cout<<ans<<endl;

    }
    
    return 0;
}