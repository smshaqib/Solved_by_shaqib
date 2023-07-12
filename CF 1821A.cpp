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

        int r=0;

        if(s[0]=='0') r =0;

        else if(s[0]=='?') r =9;

        else r=1;

        for(int i=1; i<s.length(); i++){

            if(s[i]=='?') r*=10;
        }

        cout<<r<<endl;

    }

}
