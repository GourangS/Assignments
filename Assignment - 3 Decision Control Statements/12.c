#include<stdio.h>
#include<ctype.h>

int main(){

    char x;
    printf("Enter an Alphabet : ");
    scanf("%c",&x);
    if(isupper(x))printf("Uppercase");
    else printf("Lowercase");
    return 0;
}