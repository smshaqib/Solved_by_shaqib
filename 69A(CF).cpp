#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    int sa =0,sb=0,sc=0;

    while(t--){


        int a,b,c;
        cin>>a>>b>>c;

        sa+=a;
        sb+=b;
        sc+=c;

    }

    if(sa==0 && sb==0 && sc==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
