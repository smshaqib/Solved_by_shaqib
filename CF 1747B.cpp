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
        cout<<1<<endl;
        cout<<1<<" "<<3<<endl;
        return;
    }

    int l;

    if(n%2==0){
        l=n/2;
    }
    else{
        l=n/2+1;
    }
    cout<<l<<endl;


    int i=1, j =n*3;

    while(i<j){

        cout<<i<<" "<<j<<" ";

        i+=3;
        j-=3;
    }
    cout<<endl;

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


