#include<bits/stdc++.h>
#define ll long long int
#define VI vector<int>
#define YES cout<<"YES\n";
#define yes cout<<"yes\n";
#define NO cout<<"NO\n";
#define no cout<<"no\n";
#define endl "\n";

using namespace std;

void solve( ){


}



int const mx = 2e5+123;

int a[mx];
ll sum[mx];


#define mem(a,b) memset(a, b, sizeof(a) )

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    int t;
//    cin>>t;
//
//    while(t--){
//
//        solve();
//    }

    int n,x;
    cin>>n>>x;




    for(int i=1; i<=n; i++)cin>>a[i];

    for(int i = 1; i<=n; i++)sum[i]=sum[i-1]+a[i];

    ll ans = 0;

    map<ll,int> cnt;
    cnt[0]=1;

    for(int i=1; i<=n; i++){

        cnt[sum[i]]++;

        ll SM = sum[i]-x;

        ans+=cnt[SM];


    }

    cout<<ans<<endl;



}
