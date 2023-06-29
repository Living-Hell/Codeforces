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
bool flag = 0;

void helper(string &s, int ind, int m, string &l, string &r, string &res){
    if(ind == m){
        int j=0;
        for(int i=0; i<s.size(); i++){
            if(j<m && s[i] == res[j]) ++j;

        }
        if(j!=m){
            flag = 1;
        }
        return;
    }
    for(int i=l[ind]-'0'; i<=r[ind]-'0'; i++){
        res.push_back(i+'0');
        helper(s,ind+1,m,l,r,res);
        res.pop_back();
    }
}

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
        string res;flag=0;
         helper(s,0,m,l,r,res);
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}