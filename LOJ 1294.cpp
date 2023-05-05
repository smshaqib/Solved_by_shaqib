#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    int x=1;

    while(x<=t){

        long int m,n;
        cin>>n>>m;

        long int r = (n/2)*m;

        cout<<"Case "<<x<<": "<<r<<endl;

        x++;
    }


}
