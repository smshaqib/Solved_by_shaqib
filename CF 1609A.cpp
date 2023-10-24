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
     int c=0;
 
     for(int i=0; i<n; i++){
 
        cin>>a[i];
 
        while(a[i]%2==0 && a[i]>1){
            a[i]/=2;
            c++;
        }
     }
 
     sort(a.begin(),a.end());
 
 
     ll int big = a[n-1];
     ll int sum=0;
 
     for(int i=0; i<n-1; i++){
 
        sum+=a[i];
     }
 
 
     while(c--)big*=2;
 
 
     cout<<big+sum<<endl;
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
 
 