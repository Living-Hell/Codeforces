//Wrong Solution

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
        ll n;
        cin>>n;
        vl v(n);
        bool z=0;
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[i]==0)
                z=1;
        }

        if(!z){
            cout<<"YES"<<endl;
            continue;
        }

        if(n==1){
            cout<<"NO"<<endl;
            continue;
        }

        vl v1=v;
        sort(v1.begin(),v1.end());
        
        ll mx=-1,mx2=0;
        for(int i=1; i<n; i++){
            if((v1[i]-v1[i-1])>1){
                mx = v1[i-1]+1;
                mx2=v1[i];
                break;
            }
        }

        if(mx==-1){mx2 = v[n-1];}

        int st, end;

        for(st=0; st<n-1; st++){
            if(v[st]==mx2){
                break;
            }
        }

        for(end=n-1; end>=0; end--){
            if(v[end]==mx2){
                break;
            }
        }

        if(mx==-1){
            if((end-st)>=1){
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
            continue;
        }

        for(int i=st; i<=end; i++){
            v[i] = mx;
        }

        sort(v.begin(),v.end());
        
        ll mx3=-1;
        if(v[0]!=0) mx3=0;
        else{
            for(int i=1; i<n; i++){
                if(v[i]-v[i-1]>1){
                    mx3 = v[i-1]+1;
                    break;
                }
            }
            if(mx3==-1)
                mx3=v[n-1]+1;
        }
        // cout<<mx<<" "<<mx2<<" "<<mx3<<endl;
        if(mx+1==mx3) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}