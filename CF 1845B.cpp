#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){


        int Ax,Ay,Bx,By,Cx,Cy;

        cin>>Ax>>Ay>>Bx>>By>>Cx>>Cy;

        int dAB = abs(Ax-Bx)+abs(Ay-By);

        int dAC = abs(Ax-Cx)+abs(Ay-Cy);

        int dBC = abs(Bx-Cx)+abs(By-Cy);

        int result = (dAB+dAC-dBC)/2;

        cout<<result+1<<endl;

    }


    return 0;

}
