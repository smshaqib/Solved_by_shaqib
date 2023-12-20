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

    int l[26+5];

    for(int i=0; i<26+5; i++){
        l[i]=0;
    }

    for(int i=1; i<=n; i++){

        char c;
        cin>>c;

        l[c-'A'+1]++;
    }


    int f=0;

    for(int i=1; i<=26; i++){


        if(i<=l[i]){
            f++;
        }
    }

    cout<<f<<endl;

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


