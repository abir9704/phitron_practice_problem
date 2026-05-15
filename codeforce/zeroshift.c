#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    for(int j=0;j<n-1;j++){
        for(int k=j+1;k<n;k++){
            int temp;
              if(arr[j]==0){
                temp=arr[k];
                arr[k]=arr[j];
                arr[j]=temp;
              }
        }
    }

    for(int l=0;l<n;l++){
        printf("%d ", arr[l]);
    }

    return 0;
}