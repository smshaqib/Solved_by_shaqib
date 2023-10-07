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

    string s;
    cin>>s;

    int n=s.length();

    if(n==2 && s[0]=='(' && s[1]==')'){
        NO
        return;
    }

    YES

    int c=0;

    for(int i=0; i<n-1; i++){

        if(s[i]==s[i+1]){
            c = 1;
        }
    }


    if(c==0){

        for(int i=0; i<n ; i++){
            cout<<'(';
        }
        for(int i=0; i<n ; i++){
            cout<<')';
        }
    }
    else{
        for(int i=0; i<n*2 ; i++){

            if(i%2==0){
                cout<<'(';
            }
            else{
                cout<<')';
            }
        }
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
