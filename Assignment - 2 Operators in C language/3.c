#include<stdio.h>

int main(){

    int x,y,z;
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);
    printf("Before the swapping , values of x is %d and value of y is %d \n",x,y);
    z=x;x=y;y=z;
    printf("After the swapping , values of x is %d and value of y is %d",x,y);
    return 0;
}