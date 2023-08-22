#include<bits/stdc++.h>
#define ll long long
#define endl "\n";

using namespace std;

void solve( ){

    int n;
    cin>>n;

    vector<int> a(n);

    vector<int> b(n);

    for(int i=0; i<n; i++){

        cin>>a[i];
        b[i]=a[i];
    }

    sort(b.begin(),b.end(),greater<int>());

    int big = b[0], sbig = b[1];

    for(int i=0; i<n ; i++){

        if(a[i]==big){
            cout<<a[i]-sbig;
        }
        else{
            cout<<a[i]-big;
        }

        if(i<n-1)
        cout<<" ";
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

