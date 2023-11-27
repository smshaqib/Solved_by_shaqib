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

    int emp = 0, b  =0 ;
    int c=0;

    for(int i=0; i<n; i++){



        if(s[i]=='.'){
            c++;
            b++;
        }
        else{


            if(c>emp){
                emp = c;
            }

            c=0;
        }


    }

    if(c>emp){
                emp = c;
            }

    if(emp>2){
        cout<<2<<endl;
    }
    else{
        cout<<b<<endl;
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


