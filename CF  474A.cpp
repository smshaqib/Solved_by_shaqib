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

    char c;
    cin>>c;

    string s;
    cin>>s;


    string s1= "qwertyuiopasdfghjkl;zxcvbnm,./";


    if(c=='R'){
        for(int i=0; i<s.length(); i++){

            for(int j=0; j<s1.length(); j++){

                if(s[i]==s1[j]){
                    cout<<s1[j-1];
                }
            }
        }
    }
    else{
        for(int i=0; i<s.length(); i++){

            for(int j=0; s1.length(); j++){

                if(s[i]==s1[j]){
                    cout<<s1[j+1];
                }
            }
        }
    }

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
//
//    int t;
//    cin>>t;

//    while(t--){
//
        solve();
//
//    }
}
