#include<bits/stdc++.h>
#define ll long long
#define endl "\n";

using namespace std;



int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        string s = "314159265358979323846264338327";

        string s2;

        cin>>s2;
        int c=0;

        for(int i=0; i<s2.length(); i++){

            if(s2[i]==s[i]){
                c++;
            }
            else{
                break;
            }
        }

        cout<<c<<endl;
    }
}
