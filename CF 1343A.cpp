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


    for(int i=2; i<30; i++){


        int res = pow(2,i)-1;

        if(n%res==0){
            cout<<n/res<<endl;
            break;
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


