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

    int a[n];

    for(int i=0; i<n; i++){

        cin>>a[i];
    }

    int c=0;
    int l=0;


    for(int i=0; i<n-1; i++){

        if(a[i]<=a[i+1]){
            c++;
        }

        else{

            c++;

            if(c>l){
                l=c;
            }

            c=0;
        }
    }

    if(c>l){
        l=c;
    }

    cout<<l<<endl;

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    int t;
//    cin>>t;
//
//    while(t--){

        solve();
//    }
}


