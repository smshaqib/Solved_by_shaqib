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

    ll int n;
    cin>>n;


    if(n%2!=0 || n<4){

        cout<<-1<<endl;
    }
    else{

        ll int a,b;


        if(n%6==0){
            a=n/6;
        }
        else{
            a =n/6+1;
        }

        b = n/4;

        cout<<a<<" "<<b<<endl;

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


