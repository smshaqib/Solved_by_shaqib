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

    if(n==1){
        cout<<55<<endl;
        return;
    }

    if(n%2){

        for(int i=0; i<n; i++){
            cout<<"60123 ";
        }
        cout<<endl;
    }
    else{

        cout<<"1 3 ";

        for(int i=2; i<n; i++){
            cout<<"2 ";
        }
        cout<<endl;
    }

//    if(n%2!=0){
//
//        for(int i=1; i<=n; i++){
//            cout<<1<< " ";
//        }
//        cout<<endl;
//    }
//    else{
//
//        for(int i=1; i<=n/2; i++){
//
//            cout<<1<< " ";
//        }
//
//        for(int i=n/2+1; i<=n; i++){
//
//            cout<<2<< " ";
//        }
//        cout<<endl;
//    }



}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        solve();
    }

//    cout<<(5^5^5^5^5)<<endl;
}
