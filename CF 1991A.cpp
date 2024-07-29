#include<bits/stdc++.h>
using namespace std;

int main(){


    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;


        int ar[n]; for(int i=0; i<n; i++)cin>>ar[i];

        int a=0,b=0,c=0;

        for(int i=0+2; i<n-2; i++){

            a = max(a,ar[i]);

        }

        b = ar[0];

        c = ar[n-1];


       if(a>=b && a>=c){
          cout<<a<<endl;
       }
       else if(b>=c && b>=a){
          cout<<b<<endl;
       }
       else{
          cout<<c<<endl;
       }

    }

}
