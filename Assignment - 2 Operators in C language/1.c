#include<stdio.h>

int main(){

    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("The Unit place of the number %d is %d",x,x%10);
    return 0;
}