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

        if(s[0]=='^' && s.length()==1){
            cout<<1<<endl;
            continue;
        }

        int res=0;

        if(s[0]=='_'){
            res++;
        }

        if(s[s.length()-1]=='_'){
            res++;
        }

        for(int i=0; i<s.length()-1; i++){

            if(s[i]=='_' && s[i+1]=='_'){

                res++;
            }

        }

        cout<<res<<endl;
    }

}
