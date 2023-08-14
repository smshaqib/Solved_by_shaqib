#include<bits/stdc++.h>
#define ll long long
#define endl "\n";

using namespace std;

void solve( ){

    int n;
    cin>>n;

    vector<int> a(n), b(n);

    for(int i=0; i<n; i++){
        cin>>a[i];
        b[i]=a[i];
    }

    sort(b.begin(), b.end());

    int c=0;
    for(int i=0; i<n; i++){
        if(a[i]%2==b[i]%2){
            c++;
        }
    }

    if(c==n){
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
