#include <stdio.h>


char capital_to_small( char input){
   int number = (int)input+32;
   char finaloutput= number;

   return finaloutput;
}

int main(){

    char input;
    scanf("%c", &input);
    char output = capital_to_small(input);

    printf("%c", output);
    return 0;
}