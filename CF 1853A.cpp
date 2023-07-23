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

        int a[n];
        int diff[n-1];


        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int f=0;
        for(int i=0; i<n-1; i++){
            if(a[i]>a[i+1]){
                f=1;
            }
        }
        for(int i=0; i<n-1; i++){
            diff[i]=(a[i+1]-a[i]);
        }

        int min = diff[0];
        int pos=0;

        for(int i=0; i<n-1; i++){

            if(diff[i]<min){
                min = diff[i];
                pos=i;
            }
        }

        int x = a[pos];
        int y = a[pos+1];

        int z = abs(x-((x+y)/2))+1;

        if(f==1){
            cout<<0<<endl;
        }
        else{
            cout<<z<<endl;
        }

    }

    return 0;
}
