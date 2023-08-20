#include<bits/stdc++.h>
#define ll long long
#define endl "\n";


using namespace std;

void solve( ){

    int n;
    cin>>n;

    vector <int> v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    if(v[0]<0){
        cout<<v[0]<<endl;
    }
    else{
        cout<<v[n-1]<<endl;
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
