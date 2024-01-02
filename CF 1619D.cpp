#include<bits/stdc++.h>
#define ll long long
#define VI vector<int>
#define YES cout<<"YES\n";
#define yes cout<<"yes\n";
#define NO cout<<"NO\n";
#define no cout<<"no\n";
#define endl "\n";

using namespace std;

void solve( ){


    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    VI w(n+1);

    w[0]=0;

    for(int i=1; i<=n; i++){

        if(s[i-1]=='W'){
            w[i]=w[i-1]+1;
        }
        else{
            w[i]=w[i-1];
        }
    }
//
//    for(int i=1; i<=n; i++)cout<<w[i]<<" ";

    int ans = INT_MAX;

    for(int i=k; i<=n; i++){

        ans =  min(ans,w[i]-w[i-k]);
    }

    cout<<ans<<endl;
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        solve();
    }


}

