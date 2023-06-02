#include<iostream>
using namespace std;

int main(){


    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        if(n==1){
            cout<<1<<endl;
            continue;
        }
        int sum = ((n*(n+1))/2)-1;

        int x = ((sum/n)+1)*n;
        x=x-sum;
        cout<<x<<" ";

        for(int i=2; i<n; i++){
            cout<<i<<" ";
        }
        cout<<n<<endl;

    }

}
