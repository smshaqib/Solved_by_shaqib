#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <algorithm>
#define ll long long
#define VI vector<int>
#define YES cout<<"YES\n";
#define yes cout<<"yes\n";
#define NO cout<<"NO\n";
#define no cout<<"no\n";
#define endl "\n";

using namespace std;

int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}

void solve( ){

    int n;
    cin>>n;

    VI a(n);

    for(int i=0; i<n; i++)cin>>a[i];

    int ans = 0;

    VI b(n) ;
    int x=0;

    for(int i=0; i<n; i++){

        if(a[i]%2==0){
            b[x] = (a[i]);
            x++;
        }

    }


    for(int i=0; i<n; i++){

        if(a[i]%2!=0){
            b[x] = (a[i]);
            x++;
        }


    }

    for(int i=0; i<n ; i++){
//    cout<<b[i]<<" ";
        for(int j=i+1; j<n; j++){

            ans += __gcd(b[i], b[j] * 2) > 1;
        }
    }

    cout<<ans<<endl;
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

