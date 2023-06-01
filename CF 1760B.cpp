#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;
        string s;
        cin>>s;

        int big=0;
        for(int i=0; i<n; i++){

            if(big<s[i]){
                big=s[i];
            }
        }

        cout<<big-96<<endl;
    }
}
