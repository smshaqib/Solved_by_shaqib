#include<bits/stdc++.h>
#define ll long long
#define endl "\n";
 
using namespace std;
 
void solve( ){
 
    int n,m,k,H;
    cin>>n>>m>>k>>H;
 
    int h;
 
    int c=0;
 
    for(int i=0; i<n; i++){
        cin>>h;
 
 
        if(abs(h-H)%k==0 && abs(H-h)<=(m-1)*k && h!=H){
            c++;
        }
    }
 
    cout<<c<<endl;
 
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