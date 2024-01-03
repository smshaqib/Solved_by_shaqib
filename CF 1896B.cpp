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

    string s;
    cin>>s;

    int b=0,a=n-1;

    for(int i=0; i<n; i++){
        if(s[i]=='A'){
            a = i;
            break;
        }
    }


    for(int i=0; i<n; i++){
        if(s[i]=='B'){
            b = i;
        }
    }


    cout<<max(0,b-a)<<endl;

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

