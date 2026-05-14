#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int space = 1;
    int star = (n*2)-1;
    
    for(int i=1;i<=n;i++){//printing lines
        for(int j=0;j<space;j++){//printing space
            printf(" ");
        }
        for(int j=star;j>=1;j=j-1){//printing star
            printf("*");
        }
          for(int k=0;k<space;k++){//printing space
            printf(" ");
        }
        printf("\n");
        star=star-2;
        space=space+1;
    }
    return 0;
}