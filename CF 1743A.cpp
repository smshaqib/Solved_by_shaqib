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

    for(int i=0; i<n; i++){
        int x=0;
        cin>>x;
    }

    n=10-n;

    if(n==0 || n==1){
        cout<<0<<endl;
    }
    if(n==2){
        cout<<6<<endl;
    }
    if(n==3){
        cout<<18<<endl;
    }
    if(n==4){
        cout<<36<<endl;
    }
    if(n==5){
        cout<<60<<endl;
    }
    if(n==6){
        cout<<90<<endl;
    }
    if(n==7){
        cout<<126<<endl;
    }
    if(n==8){
        cout<<168<<endl;
    }
    if(n==9){
        cout<<216<<endl;
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


