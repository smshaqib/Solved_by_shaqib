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

        int i=0;

        if(s[0]== 'y' || s[0]=='Y'){
            i++;
        }

        if(s[1]=='E' || s[1]=='e'){
            i++;
        }

        if(s[2]=='s' || s[2]=='S'){
            i++;
        }

        if(i==3){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }

}
