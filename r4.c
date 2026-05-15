#include <stdio.h>


char small_to_capital(input){
   int number = (int)input-32;
   char finaloutput= number;

   return finaloutput;
}

int main(){

    char input;
    scanf("%c", &input);
    char output = small_to_capital(input);

    printf("%c", output);
    return 0;
}