#include<stdio.h>
#include<ctype.h>

int main(){

    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    if((x%7==0) || (x%3==0))printf("Divisible by 3 or 7");
    else printf("Not Divisible by 3 or 7");
    return 0;
}