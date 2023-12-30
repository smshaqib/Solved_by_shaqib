#include<bits/stdc++.h>
#define ll long long
#define VI vector<int>
#define YES cout<<"YES\n";
#define yes cout<<"yes\n";
#define NO cout<<"NO\n";
#define no cout<<"no\n";
#define endl "\n";

using namespace std;

int v(char c){


    if(c=='a' || c=='e'){
        return 1;
    }
    else{
        return 0;
    }
}


void solve( ){

    int n;
    cin>>n;

    string s;
    cin>>s;

    string s2;
    s2 = s;

    for(int i=0; i<n; i++){

        if((v(s[i]))==1){

            s2[i]='v';
        }
        else{
            s2[i]='c';
        }

    }


//    cout<<s2<<endl;

    //cvccvcvcvccvc

    int i=0;

    string ans;

    while(i<n){

        ans+=s [i];

        if(s2[i]=='v' && s2[i+2]!='v'){

            ans+=s[i+1] ;
            ans+=".";

            i++;
        }
        else if(s2[i]=='v' && s2[i+2]=='v' && i+2<n){

            ans+=".";

        }

        i++;
    }

    int len = ans.length();

    ans[len-1]= ' ';

    for(int i=0; i<len; i++){
        if((ans[i]>='a' && ans[i]<='z') || ans[i]=='.')

        cout<<ans[i];
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
