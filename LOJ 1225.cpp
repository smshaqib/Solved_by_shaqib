#include<iostream>
#include<string.h>
using namespace std;

int main(){


    int t;
    cin>>t;
    int x=1;

    while(x<=t){

        string s;
        cin>>s;

        string r;

        for(int i=s.length()-1,j=0; i>=0; i--,j++){

            r[j]=s[i];
        }

        int c=0;
        for(int i=0; i<s.length(); i++){

            if(r[i]==s[i]){
                c++;
            }
        }

        if(c==s.length()){
            cout<<"Case "<<x<<": "<<"Yes"<<endl;
        }
        else{
            cout<<"Case "<<x<<": "<<"No"<<endl;
        }
        x++;

    }


}
