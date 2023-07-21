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

        int f=0;
        string s;

        string s1,s2;

        for(int i=0; i<2*n-2; i++){

            cin>>s;

            int len = s.length();

            if(len==(n-1) && f==0){
                s1=s;
                f=1;
            }

            if(len==(n-1) && f==1){
                s2=s;
            }

        }


        reverse(s2.begin(),s2.end());

        if(s1==s2){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
