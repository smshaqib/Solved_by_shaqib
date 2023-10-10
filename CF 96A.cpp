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

    string s;
    cin>>s;


    int n =  s.length();

    int c=1;


    for(int i=0; i<n-1; i++){

        if(s[i]==s[i+1]){
            c++;

            if(c==7){
                YES
                return;
            }
        }
        else{

            c=1;
        }
    }


    NO
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


