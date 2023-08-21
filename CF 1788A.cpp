#include<bits/stdc++.h>
#define ll long long
#define endl "\n";

using namespace std;

void solve( ){

    int n;
    cin>>n;

    int a[n];

    int c1=0,c2=0;

    for(int i=0; i<n; i++){
        cin>>a[i];

        if(a[i]==1)c1++;

        else c2++;
    }



    if(c1==n){
        cout<<1<<endl;
    }

    else if(c2%2!=0){
        cout<<-1<<endl;
    }

    else{

        c2/=2;

        for(int i=0; i<n; i++){

            if(a[i]==2){
                c2--;
            }

            if(c2==0){
                cout<<i+1<<endl;
                break;
            }
        }

    }



}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        solve();
    }
}

