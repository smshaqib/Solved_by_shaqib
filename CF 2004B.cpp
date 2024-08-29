#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int a,b,x,y;
        cin>>a>>b>>x>>y;

        if(b<x || y<a){
            cout<<1<<endl;
            continue;
        }

        int lim1 = max(a,x);
        int lim2 = min(b,y);

        int ans = abs(lim1-lim2);

        if(a!=x)ans+=1;
        if(b!=y)ans+=1;

        cout<<ans<<endl;
    }

}
