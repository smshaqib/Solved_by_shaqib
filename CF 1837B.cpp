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

        string s;
        cin>>s;

        int c=0,ln=0,ln2=0;

        for(int i=0; i<n; i++){

            if(s[i]=='<'){
                c++;
            }

            if(s[i]=='>'){


                if(ln<c){
                    ln = c;
                }
                c=0;
            }

        }

        if(ln<c){
            ln=c;
        }

        c=0;

        for(int i=0; i<n; i++){

            if(s[i]=='>'){
                c++;
            }

            if(s[i]=='<'){

                if(ln2<c){
                    ln2 = c;
                }
                c=0;
            }

        }

        if(ln2<c){
            ln2=c;
        }

        int res = max(ln,ln2);

        cout<<res+1<<endl;

    }

}
