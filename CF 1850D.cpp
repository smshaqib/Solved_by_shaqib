#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int p, int q, int r) {


  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int l, int r) {
  if (l < r) {

    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    merge(arr, l, m, r);
  }
}


int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;


    while(t--){

        int n,k;
        cin>>n>>k;

        int a[n];

        for(int i=0; i<n; i++){
            cin>>a[i];
        }

//        for(int i=0; i<n; i++){
//
//            for(int j=0; j<n-1-i; j++){
//
//                if(a[j]>a[j+1]){
//                    swap(a[j],a[j+1]);
//
//                }
//            }
//        }
        mergeSort(a, 0, n - 1);

        int absol[n-1];

        for(int i=0; i<n-1; i++){

            absol[i]=abs(a[i]-a[i+1]);

        }

        int c=0;
        int highlen=0;

        for(int i=0; i<n-1; i++){

            if(absol[i]<=k){
                c++;
            }
            else{

                if(c>highlen){
                    highlen=c;
                }
                c=0;
            }
        }

        if(c>highlen){
            highlen=c;
        }

        cout<<(n-(highlen+1))<<endl;

    }

}
