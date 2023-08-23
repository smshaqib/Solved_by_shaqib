#include<bits/stdc++.h>
#define ll long long
#define endl "\n";
 
using namespace std;
 
 
 
void solve( ){
 
    int n;
    cin>>n;
 
    string s;
    cin>>s;
 
    for(int i=0; i<n-1; i++){
 
        for(int j=0; j<n-1-i; j++){
 
            if(s[j]>s[j+1]){
                swap(s[j],s[j+1]);
            }
        }
    }
 
    if(s=="Timru"){
          cout<<"YES"<<endl;
    }
 
 
    else
        cout<<"NO"<<endl;
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