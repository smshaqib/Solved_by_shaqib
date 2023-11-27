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

    int n,x;
    cin>>n>>x;

    int a[x];

    for(int i=0; i<x; i++){
        a[i]=0;
    }

    int var;
    for(int i=0; i<n; i++){
        cin>>var;

        a[var-1]=1;
    }

    int l=0;
    int c=0;

    for(int i=0; i<x; i++){

        if(a[i]==0){
            c++;
        }
        else{

            if(c+1>l){
                l=c+1;
            }
            c=0;
        }
    }

    int m;

    if(c>0){
        m=c*2;
    }

    cout<<max(l,m)<<endl;
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


