#include<stdio.h>
#include<ctype.h>

int main(){

    int a,b,c;
    printf("Enter the sides of the triangle : ");
    scanf("%d%d%d",&a,&b,&c);
    if((a+b>c) || (b+c>a) || (c+a>b) )printf("Valid Triangle");
    else printf("Not a Valid Triangle");
    return 0;
}