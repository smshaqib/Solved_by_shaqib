#include<bits/stdc++.h>
#define ll long long
#define endl "\n";

using namespace std;


int a[1000000];

void solve( ){

    int n;
    cin>>n;

    vector <int> a(n);

    for(int i=0; i<n; i++){

        cin>>a[i];
    }


    sort(a.begin(),a.end());

    int c=0;
    for(int i=0; i<n-1; i++){

        if(a[i]<a[i+1]){
            c++;
        }
    }

    if(c+1==n){
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

