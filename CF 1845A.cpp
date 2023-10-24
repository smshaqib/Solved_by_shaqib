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

    int n,k,x;
    cin>>n>>k>>x;

    if(x!=1){
        YES
        cout<<n<<endl;
        for(int i=1; i<=n; i++){

            cout<<1<<" ";
        }

        cout<<endl;
    }

    else if(k>=2 && n%2==0){

        YES
        cout<<n/2<<endl;

        for(int i=1; i<=(n/2); i++){
            cout<<2<<" ";
        }

        cout<<endl;

    }

    else if(k>=3 && n%2!=0){

        YES
        cout<<n/2<<endl;


        for(int i=1; i<=(n/2)-1; i++){
            cout<<2<<" ";

        }

        cout<<3<<endl;
    }
    else{
        NO
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


