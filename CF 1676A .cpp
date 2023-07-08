#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        string s;
        cin>>s;

        int n= s.length();
        if(s[0]+s[1]+s[2]==s[n-1]+s[n-2]+s[n-3]){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }


}
