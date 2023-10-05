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

    string a,b;
    cin>>a>>b;

    for(int i=0; i<n; i++){

        if(a[i]=='G' || a[i]=='B'){
            a[i]='A';
        }

        if(b[i]=='G' || b[i]=='B'){
            b[i]='A';
        }
    }

    if(a==b){
        YES
    }
    else{
        NO
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


