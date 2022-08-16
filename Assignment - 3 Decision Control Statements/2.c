#include<stdio.h>

int main(){

    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    if(x%5==0)printf("The number %d is divisible by 5",x);
    else printf("The number %d is not divisible by 5",x);
    return 0;
}