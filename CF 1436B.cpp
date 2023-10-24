#include<bits/stdc++.h>
#define ll long long
#define VI vector<int>
#define YES cout<<"YES\n";
#define yes cout<<"yes\n";
#define NO cout<<"NO\n";
#define no cout<<"no\n";
#define endl "\n";
 
using namespace std;
 
 
int isprime(int n){
 
 
    int lim = sqrt(n);
 
    int f=0;
 
    for(int i=2; i<=lim; i++){
 
        if(n%i==0){
            f=1;
            break;
        }
    }
 
    if(f==1){
        return 1;
    }
    else{
        return 0;
    }
 
}
 
 
void solve( ){
 
    int n;
    cin>>n;
 
 
    if(n%2==0){
 
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
 
                if(i==j || (i+j)==n-1){
                    cout<<1;
                }
                else{
                    cout<<0;
                }
 
 
                if(j+1==n){
                    cout<<endl;
                }
                else{
                    cout<<"  ";
                }
            }
 
            cout<<endl;
        }
 
    }
    else{
 
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
 
                if(i==j || (i+j)==n-1){
                    cout<<1;
                }
                else if(i==n/2-1 && j==(n/2)){
                    cout<<1;
                }
                else if(i==n/2 && j==(n/2)+1){
                    cout<<1;
                }
                else{
                    cout<<0;
                }
 
                if(j+1==n){
                    cout<<endl;
                }
                else{
                    cout<<" ";
                }
            }
 
        }
 
 
 
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