#include<stdio.h>

int main(){

    char x;
    printf("Enter a character:");
    scanf("%c",&x);
    printf("ASCII code of the character %c is %d",x,(int)x);
    return 0;
}