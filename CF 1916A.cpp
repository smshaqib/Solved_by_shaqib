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

    int b[n];

    int f=0;

    int prod = 1;

    for(int i=0; i<n; i++){

        cin>>b[i];

        prod*=b[i];

        if(2023%b[i]!=0){
            f=1;
        }
    }


    if(f==1 || 2023%prod!=0){
        NO
    }
    else{

        YES

        int x = 2023/prod;

        cout<<x<<" ";
        for(int i=1; i<k; i++){

            cout<<1<<" ";
        }

        cout<<endl;

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

