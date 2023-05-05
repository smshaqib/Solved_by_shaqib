#include<iostream>
using namespace std;

int main(){



    int n;
    cin>>n;

    int c=0;

    int x[3];

    for(int i=0; i<n; i++){

        for(int j=0; j<3; j++){
            cin>>x[j];
        }

        if(x[0]+x[1]+x[2]>1){
            c++;
        }
    }

    cout<<c<<endl;

}
