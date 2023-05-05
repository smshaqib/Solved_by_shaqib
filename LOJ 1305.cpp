#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    int x=1;

    while(x<=t){

        int Ax,Ay,Bx,By,Cx,Cy,Dx,Dy;

        cin>>Ax>>Ay>>Bx>>By>>Cx>>Cy;

        Dx = (Ax+Cx)-Bx;
        Dy = (Ay+Cy)-By;

        int Area = abs((Ax*By+Bx*Cy+Cx*Dy+Dx*Ay)-(Ax*Dy+Dx*Cy+Cx*By+Bx*Ay));

        Area/=2;


        cout<<"Case "<<x<<": "<<Dx<<" "<<Dy<<" "<<Area<<endl;

        x++;
    }


}
