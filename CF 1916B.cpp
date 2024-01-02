#include<bits/stdc++.h>
#define ll long long int
#define VI vector<int>
#define YES cout<<"YES\n";
#define yes cout<<"yes\n";
#define NO cout<<"NO\n";
#define no cout<<"no\n";
#define endl "\n";

using namespace std;

ll gcd(ll a, ll b){ return (__gcd(a,b));}
ll lcm(ll a, ll b){ return (abs(a*b)/gcd(a,b));}


void solve( ){

//    ll a,b;
//    cin>>a>>b;
//
//    ll l = lcm(a,b);

    ll a,b;
    cin>>a>>b;

    ll l  = lcm(a,b);

    if(l==b){
        cout<<(b*(l/a))<<endl;
    }
    else{
        cout<<l<<endl;
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
