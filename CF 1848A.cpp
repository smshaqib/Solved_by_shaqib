#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        int m,n,k;
        cin>>n>>m>>k;

        int x,y;
        cin>>x>>y;

        int a,b;

        int count=0;

        for(int i=0; i<k; i++){

            cin>>a>>b;

            int cmp = abs(x-a)+abs(y-b);

            if(cmp%2!=0){
                count++;
            }
        }

        if(count==k){
            cout<<"YES\n";
        }

        else{
            cout<<"NO\n";
        }

    }
}
