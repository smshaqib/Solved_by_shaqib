#include<bits/stdc++.h>
#define ll long long
#define endl "\n";

using namespace std;

void solve( ){

    int n,t;

    cin>>n>>t;

    int a[n];
    int b[n];

    for(int i=0; i<n; i++){

        cin>>a[i];
        a[i]+=i;
    }

    for(int i=0; i<n; i++){
        cin>>b[i];
    }


    int v=0,ind=0;

    for(int i=0; i<n; i++){

        if(b[i]>v && a[i]<=t){
            v=b[i];
            ind =i;
        }
    }

    if(v==0){
        cout<<-1<<endl;
    }
    else{
        cout<<ind+1<<endl;
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

