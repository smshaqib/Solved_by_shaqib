#include<bits/stdc++.h>
#define ll long long
#define endl "\n";

using namespace std;

void solve( ){

    int x,y,n;
    cin>>x>>y>>n;

    int a[n];

    a[n-1]=y;

    int dif=1;


    for(int i=n-2; i>=0; i--){

        a[i]=a[i+1]-dif;

        dif++;
    }


    if(a[0]<x){
        cout<<-1<<endl;
    }
    else{

        cout<<x<<" ";
        for(int i=1; i<n-1; i++){
            cout<<a[i]<< " ";
        }

        cout<<a[n-1]<<endl;
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

