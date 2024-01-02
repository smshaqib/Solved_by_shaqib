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

    int n,h,m;
    cin>>n>>h>>m;

    int main = h*60+m;

    int x=0;

    VI ans(n);

    for(int i=0; i<n; i++)ans[i]=0;

    int i=0;

    int tc = n;

    while(tc--){

        int hi,mi;
        cin>>hi>>mi;

        int x = hi*60+mi;

        if(main<x){
            ans[i] = (x-main);
        }
        else if(main>x){
            ans[i] = (1440-main+x);

        }
        else{
            ans[i]=0;
        }
        i++;
    }


    sort(ans.begin(),ans.end());

    int res = ans[0];


    int a = res/60;
    int b = res-a*60;

    cout<<a<<" "<<b<<endl;

//
//    for(int j=0; j<n; j++){
//        cout<<ans[j]<<" ";
//    }
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

