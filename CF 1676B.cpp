#include<bits/stdc++.h>
#define ll long long
#define endl "\n";

using namespace std;

void solve( ){

    int n;
    cin>>n;

    vector <int> a(n);

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end());

    int x=a[0];
    int sum =0;

    for(int i=1; i<n; i++){

        sum+= a[i]-x;
    }
    cout<<sum<<endl;

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

