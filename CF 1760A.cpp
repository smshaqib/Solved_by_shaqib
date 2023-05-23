#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        int a,b,c;
        cin>>a>>b>>c;

        int ar[3]={a,b,c};

        for(int i=0; i<3-1; i++){
            for(int j=0; j<3-1; j++){
                if(ar[j]<ar[j+1]){
                    int t = ar[j];
                    ar[j]=ar[j+1];
                    ar[j+1]=t;
                }
            }
        }

        cout<<ar[1]<<endl;
    }

}
