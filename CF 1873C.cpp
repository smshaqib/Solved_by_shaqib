#include<bits/stdc++.h>
#define ll long long
#define VI vector<int>
#define YES cout<<"YES\n";
#define yes cout<<"yes\n";
#define NO cout<<"NO\n";
#define no cout<<"no\n";
#define endl "\n";
 
using namespace std;
 
void solve( )
{
 
 
    int sum =0;
 
    for(int i=1; i<=10; i++)
    {
 
        for(int j=1; j<=10; j++)
        {
 
            char c;
            cin>>c;
 
            if(c=='X'){
 
                if(j==1|| i==1 || j==10 || i==10){
                    sum+=1;
                }
                else if(j==2|| i==2 || j==9 || i==9){
                    sum+=2;
                }
                else if(j==3|| i==3 || j==8 || i==8){
                    sum+=3;
                }
                else if(j==4|| i==4 || j==7 || i==7){
                    sum+=4;
                }
                else if(j==5|| i==5|| j==6 || i==6){
                    sum+=5;
                }
            }
        }
    }
 
    cout<<sum<<endl;
 
 
}
 
int main()
{
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin>>t;
 
    while(t--)
    {
 
        solve();
    }
}