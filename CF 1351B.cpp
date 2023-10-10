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

    int a,b,x,y;
    cin>>a>>b>>x>>y;

    int ans = (a*b)+(x*y);

    int sq = sqrt(ans);

    if(sq*sq==ans){
        YES
    }
    else{
        NO
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


