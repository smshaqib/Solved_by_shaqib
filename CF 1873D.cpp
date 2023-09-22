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
 
    int n,k;
 
    cin>>n>>k;
 
    string s;
    cin>>s;
 
    int c=0;
 
    int cnt =0;
 
    int f=0;
 
    for(int i=0; i<s.length(); i++){
 
        if(s[i]=='B' && f==0){
            f=1;
        }
 
        if(f==1){
            c++;
        }
 
        if(c==k){
            cnt++;
            c=0;
            f=0;
        }
    }
    if(c>=1){
            cnt++;
            c=0;
            f=0;
        }
 
    cout<<cnt<<endl;
 
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