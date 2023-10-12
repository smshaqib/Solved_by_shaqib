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

    int n;
    cin>>n;


    for(int i=1; i<=n; i++){

        if(i%2==1){
            cout<<"I hate ";

        }
        else{
            cout<<"I love ";
        }

        if(i==n){
            cout<<"it"<<endl;
        }
        else{
            cout<<"that ";
        }
    }
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
//
//    int t;
//    cin>>t;
//
//    while(t--){

        solve();
//    }
}


