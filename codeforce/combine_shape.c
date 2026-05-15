#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);

    int space = n-1;
    int star =1;

    for(int i=1;i<=n;i++){//printing lines
        for(int j=1;j<=space;j++){//printing spcae
              printf(" ");
        }

        for(int k=1;k<=star;k++){//printing stars
            printf("*");
        }

        printf("\n");
        
          space--; 
         star=star+2;
                           
    }

      for(int i=1;i<=n;i++){//printing lines
           space++; 
         star=star-2;
        for(int j=1;j<=space;j++){//printing spcae
              printf(" ");
        }

        for(int k=1;k<=star;k++){//printing stars
            printf("*");
        }

        printf("\n");
        
       
                           
    }


    


    return 0;
}