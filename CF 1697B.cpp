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


}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    int t;
//    cin>>t;
//
//    while(t--){
//
//        solve();
//    }

    int n,q;
    cin>>n>>q;

    VI a(n);

    for(int i=0; i<n; i++)cin>>a[i];

    sort(a.begin(),a.end(),greater<int>());

    ll int sum[n+1];

    for(int i=0; i<=n; i++)sum[i]=0;

    for(int i=1; i<=n; i++){
        sum[i]=sum[i-1]+a[i-1];
//        cout<<sum[i]<<" ";
    }

    while(q--){

        int x,y;
        cin>>x>>y;

        int r=x;
        int l=x-y;

        cout<<sum[r]-sum[l]<<endl;
    }

}

