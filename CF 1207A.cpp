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

    int b,p,f,h,c;
    cin>>b>>p>>f>>h>>c;

    int maxPrice=h,maxPricePatNum=p;
    int minPrice=c,minPricePatNum=f;

    if(maxPrice<minPrice){

        maxPrice=c,maxPricePatNum=f;
        minPrice=h,minPricePatNum=p;
    }

    int burgerNum = b/2;

    int ans = 0;


    if( maxPricePatNum > burgerNum ){

        ans+= (burgerNum*maxPrice);
        burgerNum=0;
    }
    else{

        ans+=(maxPricePatNum*maxPrice);
        burgerNum =  burgerNum-maxPricePatNum;

    }

    if(minPricePatNum>burgerNum){

        ans+=(burgerNum*minPrice);
    }
    else{
        ans+=(minPricePatNum*minPrice);
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

