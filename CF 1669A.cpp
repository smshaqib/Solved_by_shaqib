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

    if(n>=1900){

        cout<<"Division 1"<<endl;
    }
    else if(n<=1899 && n>=1600){

        cout<<"Division 2"<<endl;
    }
    else if(n<=1599 && n>=1400){

        cout<<"Division 3"<<endl;
    }
    else if(n<=1399){

        cout<<"Division 4"<<endl;
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


