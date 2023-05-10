//cp setup
#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        int a,b,c;
        cin>>a>>b>>c;

        int t1=0,t2=0;

        if(a+b==c){
            t1=1;
        }
        if(a-b==c){
            t2=1;
        }

        if(t1==1){
            cout<<"+"<<endl;
        }
        else if(t2==1){
            cout<<"-"<<endl;
        }

    }

    return 0;
}
