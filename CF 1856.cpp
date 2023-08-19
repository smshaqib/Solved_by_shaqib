#include<bits/stdc++.h>
#define ll long long
#define endl "\n";

using namespace std;

void solve( ){

    int n;
    cin>>n;

    int a[n];

    int big=0;
    for(int i=0; i<n; i++){
        cin>>a[i];

    }


    int c=0;

    for(int i=n-1; i>0; i--){

        if(a[i]>=a[i-1]){
            c++;
        }
        else{
            break;
        }
    }

    for(int i=0; i<n-c; i++){
        if(big<a[i]) big = a[i];

    }

    if(c+1==n){
        cout<<0<<endl;
    }
    else{
        cout<<big<<endl;
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
