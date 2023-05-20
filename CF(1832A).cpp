#include<stdio.h>
#include<string.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){

        char c[100];
        scanf("%s",c);


        int l = strlen(c);

        if(l<=2){
            printf("no\n");
            continue;
        }
        int mid =0;

        if(l%2!=0){
            mid = l/2;
        }
        else{
            mid = l/2+1;
        }

        int al[26];

        for(int i=0; i<26; i++){

            al[i]=0;
        }

        for(int i=0; i<mid; i++){
            al[c[i]-97]++;
        }

        int res=0;
        for(int i=0; i<26; i++){

            if(al[i]>0){
                res++;
            }
        }

        if(res>=2){
            printf("yes\n");

        }
        else{
            printf("no\n");
        }

    }


    return 0;
}
