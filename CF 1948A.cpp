#include<iostream>
using namespace std;

int main()
{


    int t;
    cin>>t;

    while(t--)
    {

        int n;
        cin>>n;

        if(n%2==1)
        {
            cout<<"NO"<<endl;
            continue;
        }

        cout<<"YES"<<endl;

        char c = 'A';

        for(int i=1; i<=n/2; i++)
        {

            cout<<c<<c;

            if(i%2==1)
            {
                c='A';
            }
            c++;

        }
        cout<<endl;
    }

}
