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
 
    VI a(n);
 
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
 
    sort(a.begin(),a.end());
 
 
 
    a[0]+=1;
 
    int prod=1;
 
    for(int i=0; i<n; i++){
 
        prod*=a[i];
    }
 
    cout<<prod<<endl;
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