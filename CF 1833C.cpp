#include<iostream>
using namespace std;

int main(){


    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        int a[n];

        int f=0; int min =0;

        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]%2==0){
                f++;
            }
        }

        if(f==n || f==0){
            cout<<"yes"<<endl;
            continue;
        }

        min = a[0];

        for(int i=1; i<n; i++){

            if(min>a[i]){
                min = a[i];
            }

        }

        if(min%2!=0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }


    }

}
