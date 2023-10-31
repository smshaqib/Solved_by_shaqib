#include<bits/stdc++.h>
#define ll long long
#define VI vector<int>
#define YES cout<<"YES\n";
#define yes cout<<"yes\n";
#define NO cout<<"NO\n";
#define no cout<<"no\n";
#define endl "\n";

using namespace std;


int fun(int i){

    while(i%2==0 && i<1){
        i/=2;
    }

    if(i==1){
        return 1;
    }
    else{
        return 0;
    }

}

void solve( ){

    int n;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    reverse(a, a+n);

    int x=n-1;
    for(int i=n-1; i>=0; i++){

        if(fun(i)==1){


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


