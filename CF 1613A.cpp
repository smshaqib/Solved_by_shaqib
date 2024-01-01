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

    ll int x1,x2;
    ll int p1,p2;

    cin>>x1>>p1>>x2>>p2;

    int m = min(p1,p2);

    p1-=m;
    p2-=m;

    if(p1>=7){

        cout<<">"<<endl;
    }
    else if(p2>=7){
        cout<<"<"<<endl;
    }

    else{

        for(int i=1; i<=p1; i++){
            x1*=10;
        }

        for(int i=1; i<=p2; i++){
            x2*=10;
        }

        if(x1<x2){

            cout<<"<"<<endl;
        }
        else if(x1>x2){

            cout<<">"<<endl;
        }
        else{
            cout<<"="<<endl;
        }
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

