#include <stdio.h>

int char_to_ascii(){
    char p;
    scanf("%c", &p);
    int z=(int)p;

    return z;
}

int main(){
    int s= char_to_ascii();
    printf("%d", s);
    return 0;
}