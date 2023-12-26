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

    int c=0;
    int left=0,right=0,ans=0;

    for(int i=0; i<s.length(); i++){

        if(s[i]=='(' && s[i+1]==')'){
            i++;
            continue;
        }

        if(s[i]=='('){

            left++;
        }
        else{
            right++;

            if(right>left){
                ans++;
                left--;
            }
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


