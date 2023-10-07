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

    char a[8][8];

    int n=8;

    int f=0;

    int c=0;

    for(int i=0; i<n; i++){

        for(int j=0; j<n; j++){
            cin>>a[i][j];

            if(a[i][j]=='R'){
                c++;
            }
        }

        if(c==8){
            f=1;
        }

        c=0;
    }

    if(f==1){
        cout<<"R"<<endl;
    }
    else{
        cout<<"B"<<endl;
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
