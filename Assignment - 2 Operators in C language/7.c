#include<stdio.h>

int main(){

    int x,pos=0;
    printf("Enter a number:");
    scanf("%d",&x);
    while((x&1)!=1){++pos;x=x>>1;}
    printf("The position(starting from 0) of the first 1 in LSB is %d",pos);
    return 0;
}