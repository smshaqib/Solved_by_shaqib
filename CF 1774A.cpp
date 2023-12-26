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

    int num[s.length()];

    for(int i=0; i<s.length(); i++){

        num[i]= s[i]-'0';
    }

//    for(int i=0; i<s.length(); i++){
//        cout<<num[i];
//        cout<<endl;
//    }

    int sum=num[0];

    for(int i=1; i<s.length(); i++){


        if(sum+num[i]>1){
            cout<<'-';
            sum-=num[i];
        }
        else{
            cout<<'+';
            sum+=num[i];
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


