#include<bits/stdc++.h>
using namespace std;

int main(){


    string s1;
    string s2;


    cin>>s1>>s2;


    string ans;


    for(int i=0; i<s1.length(); i++){

        int x = (s1[i]-48)^(s2[i]-48);

        if(x==1){
            ans+="1";

        }
        else{
            ans+="0";
        }
    }

    cout<<ans<<endl;

    return 0;

}
