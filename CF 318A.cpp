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

    ll  int n,num;
    cin>>n>>num;

    ll int lim=0;

    if(n%2==0){
        lim =  n/2;
    }
    else{
        lim = (n/2)+1;
    }


    if(num<=lim){
        cout<<(num*2)-1<<endl;
    }
    else{

        ll int x = num-lim;
        cout<<x*2<<endl;
    }
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    int t;
//    cin>>t;
//
//    while(t--){

        solve();
//    }
}


