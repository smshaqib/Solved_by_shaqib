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

    char a[3][3];

    for(int i=0; i<3; i++){

        for(int j=0; j<3; j++){
            cin>>a[i][j];
        }

    }
//
//    for(int i=0; i<3; i++){
//
//        for(int j=0; j<3; j++){
//            cout<<a[i][j];
//        }cout<<endl;
//    }

    int sum =0;

     for(int i=0; i<3; i++){

        for(int j=0; j<3; j++){

            if(a[i][j]!='?'){
                sum+=a[i][j];
            }

        }

        if(sum>134){
            sum = 0;
            continue;
        }
        else{

            if(sum==131){
                cout<<"C"<<endl;
            }
            else if(sum==132){
                cout<<"B"<<endl;
            }
            else{
                cout<<"A"<<endl;
            }

            return;
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

