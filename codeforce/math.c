#include <stdio.h>

int main(){
    int a;
    int b;
    int c;
    char operator;
    char equals;

    scanf("%d %c %d %c %d", &a,&operator,&b,&equals,&c);

   

    int result;

    if(operator=='+'){
       result=a+b;
    }
    else if(operator=='-'){
        result=a-b;
    }
    else if(operator=='*'){
        result=a*b;
    }

    if(result==c){
        printf("Yes");
    }
    else{

        printf("%d", result);

    }

    return 0;

  
}