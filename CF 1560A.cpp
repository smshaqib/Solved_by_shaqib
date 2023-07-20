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

        int i=1;
        int c=0;

        while(true){

            if(i%3!=0 && i%10!=3){
                c++;
            }

            if(c==n){
                cout<<i<<endl;
                break;
            }

            i++;
        }
    }

    return 0;
}
