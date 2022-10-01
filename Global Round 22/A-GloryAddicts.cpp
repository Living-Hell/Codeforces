#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<ll> a(n),b(n);
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];

        vector<ll> frost,fire;
        ll sum=0;

        for(int i=0; i<n; i++){
            if(a[i] == 0)
                fire.push_back(b[i]);
            else
                frost.push_back(b[i]);
        }

        sort(frost.begin(), frost.end(), greater<int>());
        sort(fire.begin(), fire.end(), greater<int>());

        if(frost.size() == fire.size()){
            for(int i=0; i<fire.size(); i++)
                sum+= 2*fire[i] + 2*frost[i];
            sum-= min(frost[frost.size()-1], fire[fire.size()-1]);
        }

        else{

            int c = min(frost.size(), fire.size());

            if(frost.size() > fire.size())
                swap(fire,frost);
            
            for(int i=c; i<fire.size(); i++){
                //cout<<" fr1 "<<fire[i];
                sum+= fire[i];
            }

            for(int i=0; i<c; i++){
                //cout<<" fr2 "<<fire[i]<<" fs2 "<<frost[i]<<" ";
                sum += 2*frost[i] + 2*fire[i];
            }
        }

        cout<<sum<<endl;        

    }

    return 0;
}