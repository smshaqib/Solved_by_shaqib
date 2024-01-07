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

    string s;
    cin>>s;

    int cur = 0,c=0;

    for(int i=0; i<s.length(); i++){

        if(s[i]=='('){
            cur++;
        }
        else{
            cur--;
        }


        if(cur<0){
            c++;
            cur = 0;
        }
    }

    cout<<c<<endl;
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

