#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    for(int k=0;k<n-1;k++){
        for(int l=k+1;l<n;l++){
            int temp;
            if(arr[k]>arr[l]){
                temp=arr[k];
                arr[k]=arr[l];
                arr[l]=temp;
            }
        }
    }

    
        printf("%d %d", arr[0], arr[n-1]);
   

    return 0;
}