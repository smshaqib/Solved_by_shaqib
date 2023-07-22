#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        char c;
        cin>>c;

        string str = "codeforces";

        int f=0;
        for(int i=0; i<10; i++ ){
            if(str[i]==c){
                f=1;
            }
        }

        if(f==1){

            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
    }

}
