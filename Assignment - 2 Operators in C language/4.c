#include<stdio.h>

int main(){

    int x,y;
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);
    printf("Before the swapping , values of x is %d and value of y is %d \n",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("After the swapping , values of x is %d and value of y is %d",x,y);
    return 0;
}