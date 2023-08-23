#include<bits/stdc++.h>
#define ll long long
#define endl "\n";

using namespace std;

void solve( ){

    int n;
    cin>>n;

    int o=0,e=0;

    int x;
    for(int i=0; i<n*2; i++){
        cin>>x;

        if(x%2==0) e++;
        else o++;
    }


    if(e==o){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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

