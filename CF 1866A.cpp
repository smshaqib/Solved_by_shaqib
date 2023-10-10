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
 
     int a[n-1];
     int sum=0;
     for(int i=0; i<n-1; i++){
        cin>>a[i];
        sum+=a[i];
     }
 
     sum*=-1;
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