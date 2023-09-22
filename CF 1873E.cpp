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
 
    int n,w;
    cin>>n>>w;
 
    int a[n];
 
 
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
 
 
    ll int r=10e12;
    ll int l=0;
 
    ll int res=0;
 
    while(l<=r){
 
        ll int mid = (r+l)/2;
 
 
 
        ll int ans=0;
 
        for(int i=0; i<n; i++){
 
            if(a[i]>=mid){
                continue;
            }
            ans+= mid-a[i];
 
        }
 
        if(ans>w){
 
            r=mid-1;
        }
        else{
            l=mid+1;
            res = mid;
 
 
 
        }
 
 
 
 
    }
 
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