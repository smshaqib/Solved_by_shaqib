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


}


const int mx = 2e5+123;

int a[mx];
int sum[mx];



int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

//    int t;
//    cin>>t;
//
//    while(t--){
//
//        solve();
//    }

    int n,q;
    cin>>n>>q;



    for(int i=1; i<=n; i++)cin>>a[i];


    for(int i=1; i<=n; i++)sum[i]=sum[i-1]^a[i];


    while(q--){

        int l,r;
        cin>>l>>r;

        cout<<(sum[r]^sum[l-1])<<endl;
    }

    return 0;
}

