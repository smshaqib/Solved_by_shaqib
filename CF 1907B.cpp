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

    int n = s.length();

    VI ucase(n), lcase(n);

    ucase.clear();
    lcase.clear();

    for(int i=0; i<s.length(); i++){

        if(s[i]=='b'){
            s[i]='.';

            if(!lcase.empty()){

                int pop  = lcase.back();
                lcase.pop_back();
                s[pop]='.';
            }
        }

        if(s[i]=='B'){
            s[i]='.';

            if(!ucase.empty()){

                int pop2  = ucase.back();
                ucase.pop_back();
                s[pop2]='.';
            }
        }


        if(s[i]>='a' && s[i]<='z'){
            lcase.push_back(i);
        }
        if(s[i]>='A' && s[i]<='Z'){
            ucase.push_back(i);
        }
    }


    for(int i=0; i<s.length(); i++){

        if(s[i]!='.')cout<<s[i];
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

