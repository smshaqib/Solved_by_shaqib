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

    int n,a,b;
    cin>>n>>a>>b;


    char ch = 'a';

    int i=b;

    while(n--){

        if(i==0){

            i=b;
            ch = 'a';
        }


        cout<<ch;
        ch++;
        i--;

    }

    cout<<endl;

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
