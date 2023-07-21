#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int r[n],q[n];

        int store[n];

        for(int i=0; i<n; i++){
            cin>>r[i]>>q[i];

            store[i]=q[i];
        }


        for(int i=0; i<n-1; i++){

            for(int j=0; j<n-1-i; j++){

                if(q[j]<q[j+1]){
                    swap(q[j],q[j+1]);
                    swap(r[j],r[j+1]);
                }
            }
        }
        int f=0;

        for(int i=0; i<n; i++){

//                cout<<r[i]<< " "<<q[i]<<endl;
           if(r[i]<=10){

                int x=i;

                for(int j=0; i<n; j++){

                    if(q[x]==store[j]){
                        cout<<j+1<<endl;

                        f=1;
                        break;
                    }
                }
           }

           if(f==1){
            break;
           }
        }
    }

}
