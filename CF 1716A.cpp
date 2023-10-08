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

    if(n==1){
        cout<<2<<endl;
    }
    else if(n==2 | n==4){
        cout<<n/2<<endl;
    }

    else if(n%3==1 || n%3==2){
        cout<<(n/3)+1<<endl;
    }
    else if(n%3==0){

        cout<<n/3<<endl;
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


