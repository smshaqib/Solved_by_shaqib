#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){


        int n;
        cin>>n;
        int a[n];

        for(int i=0; i<n; i++) cin>>a[i];

        int c=0;

        int x[n];
        for(int i=0; i<n; i++){
            x[i]=0;
        }
        int j=0;

        for(int i=0; i<n; i++){


            if(a[i]==0){

                c++;
            }

            if(a[i]==1){

                x[j]=c;
                c=0;
                j++;
            }
        }
        x[j]=c;

        int big =0;

        for(int i=0; i<n; i++){
            if(big<x[i]){
                big = x[i];
            }
        }

        cout<<big<<endl;

    }


    return 0;
}
