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

    for(int i=n; i>=2+k; i--){

        cout<<i<<" ";
    }

    for(int i=1; i<=k+1; i++){
        cout<<i<<" ";
    }
    cout<<endl;

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


