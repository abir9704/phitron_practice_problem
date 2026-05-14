#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int space = n-1;

    for(int i=1;i<=n;i++){ //printing lines
      for(int j=space;j>=0;j--){//printing space

        printf(" ");

      }

      for(int k=1;k<=i;k++){//printing stars
        printf("*");
      }
      printf("\n");
  
      space--;
    }

    return 0;
}