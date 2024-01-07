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

     ll int x,y;
     ll int a,b;

     cin>>x>>y>>a>>b;

     if(x>y){
        swap(x,y);
     }

     ll int dif = y-x;

     ll int ans1 = (x*a+y*a);
     ll int ans2 = (dif*a+x*b);

     cout<<min(ans1,ans2)<<endl;
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

