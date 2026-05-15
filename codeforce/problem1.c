#include <stdio.h>

int main(){

    int n;

    scanf("%d", &n);
    int arr[n];
    for(int p=0;p<n;p++){
        scanf("%d", &arr[p]);
    }

    for(int i=0;i<n-1;i++){
       
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
               int temp;
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
            }
        }

      
    }

      for(int k=0;k<n;k++){
            printf("%d ", arr[k]);
        }

    return 0;

    
}