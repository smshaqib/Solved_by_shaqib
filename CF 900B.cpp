#include<bits/stdc++.h>
#define ll long long
#define VI vector<int>
#define YES cout<<"YES\n";
#define yes cout<<"yes\n";
#define NO cout<<"NO\n";
#define no cout<<"no\n";
#define endl "\n";

using namespace std;

void solve( ){

    int n;
    cin>>n;

    int a[n+1];

    for(int i=1; i<=n; i++){
        a[i]=0;
    }

    int x,y,z;

    x=2;

    int cnt=1;

    for(int i=1; i<=n; i++){

        if(cnt==1){
            a[i]=x;
            cnt++;

        }

        if(cnt==2){
            y=x+2;
            a[i]=y;
            cnt++;

        }

        if(cnt==3){

            z=x+y-1;
            a[i]=z;
            cnt=1;

        }

        x+=2;
    }

    for(int i=1; i<=n; i++){

        cout<<a[i];

        if(i==n){
            cout<<endl;
        }
        else{

            cout<<" ";
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


