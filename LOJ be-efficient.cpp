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


const int mx = 2e5+123;
ll  sum[mx];
ll  a[mx];



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

    int tc;
    cin>>tc;

    for(int j=1; j<=tc; j++){


        int n,m;
        cin>>n>>m;



        for(int i=1; i<=n; i++)cin>>a[i];


        for(int i=1; i<=n; i++) sum[i]= sum[i-1]+a[i];


        for(int i=1; i<=n; i++) sum[i]%=m;

        ll  cnt[m+1];

        for(int i=0; i<m+1; i++)cnt[i]=0;

        for(int i=1; i<=n; i++) cnt[sum[i]]++;



        ll ans=0;

        cnt[0]++;

        for(int i=1; i<=n; i++){



            cnt[sum[i]]--;

            ans+=cnt[sum[i]];
        }

        cout << "Case " << j << ": " << ans << endl;
    }

    return 0;
}

