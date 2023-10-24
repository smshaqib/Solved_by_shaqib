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

    int n;
    cin>>n;
    int c=0;
    int val = 0;+

    int a[n];

    int fn = 0;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    val = a[0];
    fn =  a[0];

    for(int i=1; i<n; i++){

        if(val==0){
            c++;
            val = a[i];
            continue;
        }

        val= a[i]&val;

        fn = a[i]&fn;
    }

    if(val==0){
            c++;
            val = a[n-1];

        }

    if(fn!=0){
        cout<<1<<endl;
    }
    else
    cout<<c<<endl;
}
//
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        solve();
    }
}


