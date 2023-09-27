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

    int n,k;
    cin>>n>>k;

    int a[110];

    for(int i=0; i<110; i++){
        a[i]=0;
    }
    for(int i=0; i<n; i++){

        int x;
        cin>>x;

        a[x]++;
    }

    if(a[k]>=1){
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


