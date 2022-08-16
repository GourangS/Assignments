#include<stdio.h>
#include<ctype.h>

int main(){

    char x;
    printf("Enter a character : ");
    scanf("%c",&x);
    if(x>=65 && x<=90)printf("It is an Uppercase alphabet");
    else if(x>=97 && x<=122) printf("It is an Lowercase alphabet");
    else if(x>=48 && x<=57)printf("It is a digit");
    else printf("It is a special character");
    return 0;
}