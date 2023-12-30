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

    int a,b,c;

    cin>>a>>b>>c;

    if(a==b){
        cout<<c<<endl;
    }
    else if(a==c){
        cout<<b<<endl;
    }
    else if(b==c){
        cout<<a<<endl;
    }
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

