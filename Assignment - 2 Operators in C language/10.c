
#include<stdio.h>

int main(){

    int x,last;
    printf("Enter a Number:");
    scanf("%d",&x);
    last = x%10;
    printf("After making last digit zero ,the number %d becomes %d",x,x-last);
    return 0;
}