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

    ll int n;
    cin>>n;

    ll int x;

    ll int minA=10e9,minB=10e9;
    ll int sumA=0,sumB=0;

    for(int i=0; i<n; i++){

        cin>>x;

        if(x<minA){
            minA=x;
        }
        sumA+=x;
    }

    for(int i=0; i<n; i++){

        cin>>x;

        if(x<minB){
            minB=x;
        }
        sumB+=x;
    }


    cout<<min(n*minA+sumB, n*minB+sumA)<<endl;

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


