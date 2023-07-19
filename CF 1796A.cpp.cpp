#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        string fb = "FBFFBFFBFBFFBFFBF";
        string s;
        cin>>s;

        int i = fb.find(s);

        if(i!=-1){
            cout<<"YES\n";
        }

        else{
            cout<<"NO\n";
        }



    }

}

