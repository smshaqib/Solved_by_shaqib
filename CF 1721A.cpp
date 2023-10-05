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

    char a,b,c,d;
    cin>>a>>b>>c>>d;

    VI l(26);

    l[a-97]++;
    l[b-97]++;
    l[c-97]++;
    l[d-97]++;

    sort(l.begin(),l.end(),greater<int>());

    if(l[0]==4){
        cout<<0<<endl;
    }
    else if(l[0]==3){
        cout<<1<<endl;
    }
    else if(l[0]==2 && l[1]==2){
        cout<<1<<endl;
    }
    else if(l[0]==2){
        cout<<2<<endl;
    }
    else{
        cout<<3<<endl;
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


