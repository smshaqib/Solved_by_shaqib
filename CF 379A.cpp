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

    int a,b;
    cin>>a>>b;

    int sum;
    sum+=a;


    while(a>=b){

        sum+= a/b;

        a=(a%b)+(a/b);

    }

    cout<<sum<<endl;
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
//
//    int t;
//    cin>>t;
//
//    while(t--){
//
//        solve();
//    }

    solve();
}


