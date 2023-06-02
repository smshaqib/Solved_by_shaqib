#include<iostream>
using namespace std;



int main(){

    int t;
    cin>>t;

    while(t--){
        int ar[10];
        for(int i=0; i<10; i++){
            ar[i]=0;
        }
        string s;
        cin>>s;

        for(int i=0; i<4; i++){
            if(s[i]=='0'){
                ar[0]++;
            }
            if(s[i]=='1'){
                ar[1]++;
            }
            if(s[i]=='2'){
                ar[2]++;
            }
            if(s[i]=='3'){
                ar[3]++;
            }
            if(s[i]=='4'){
                ar[4]++;
            }
            if(s[i]=='5'){
                ar[5]++;
            }
            if(s[i]=='6'){
                ar[6]++;
            }
            if(s[i]=='7'){
                ar[7]++;
            }
            if(s[i]=='8'){
                ar[8]++;
            }
            if(s[i]=='9'){
                ar[9]++;
            }

        }
//        for(int i=0; i<10; i++)cout<<ar[i]<<" ";
//        cout<<endl;
        for(int i=0; i<9; i++){

            for(int j=0; j<9; j++){

                if(ar[j]<ar[j+1]){
                    int t =ar[j+1];
                    ar[j+1]=ar[j];
                    ar[j]=t;
                }
            }
        }

//        for(int i=0; i<9; i++)cout<<ar[i]<<" ";


        if(ar[0]==4){
            cout<<"-1"<<endl;
        }
        else if(ar[0]==3){
            cout<<"6"<<endl;
        }
        else {
            cout<<4<<endl;
        }

        for(int i=0; i<10; i++)
            ar[i]==0;

    }

    return 0;

}
