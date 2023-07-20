#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        int a,b;
        cin>>a>>b;

        string s1,s2;
        cin>>s1>>s2;

        char r[b];

        for(int i=0, j=s2.length()-1; j>=0; i++,j--){

            r[i]=s2[j];
        }


        char newstr[a+b];

        int i=0;

        for( i; i<a; i++){
            newstr[i]=s1[i];
        }
        int j=0;

        for(i; i<a+b; i++){
            newstr[i]=r[j];
            j++;
        }

        int c=0;
        for(int i=0; i<a+b-1; i++){

            if(newstr[i]==newstr[i+1]){
                c++;
            }
        }

        if(c==0 || c==1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }


    }

}
