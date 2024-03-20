#include<bits/stdc++.h>
using namespace std;

int main(){


    float n,m;
    cin>>n>>m;


    float r = ceil(n/2);

    for(int i=r; i<=n; i++){


        if((int)i%(int)m==0){
            cout<<i<<endl;
            return 0;
        }

    }

    cout<<-1<<endl;


    return 0;
}
