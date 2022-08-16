#include<stdio.h>

int main(){

    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    if(x>0)printf("The number %d is positive!",x);
    else printf("The number %d is negative!",x);
    return 0;
}