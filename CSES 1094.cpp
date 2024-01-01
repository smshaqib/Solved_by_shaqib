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

    int n;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }


    ll int ans = 0;

    for(int i=0; i<n-1; i++){
// 3 2 5 1 7
        if(a[i]>a[i+1]){

            ans+=abs(a[i]-a[i+1]);

            a[i+1]+=abs(a[i]-a[i+1]);
        }


    }
//
//    for(int i=0; i<n; i++)cout<<a[i]<< " ";
//    cout<<endl;
    cout<<ans<<endl;

}

