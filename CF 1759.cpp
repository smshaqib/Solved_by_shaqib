#include<bits/stdc++.h>
#define ll long long
#define endl "\n";

using namespace std;

void solve( ){

    string s ="YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";


    string sub;
    cin>>sub;


    if(s.find(sub)!=string::npos){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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

