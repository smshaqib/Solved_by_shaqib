#include<bits/stdc++.h>
#define ll long long
#define endl "\n";

using namespace std;

void solve( ){

    int n;
    cin>>n;

    vector <int> a(n);

    for(int j=0; j<n; j++){
        cin>>a[j];
    }


    sort(a.begin(),a.end());

    int c=0;

    for(int i=0; i<n; i++){

        if(a[i]==1){
            c++;
        }
    }

    int res =  n-c/2;

    cout<<res<<endl;
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

