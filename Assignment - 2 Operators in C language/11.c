
#include<stdio.h>

int main(){

    int x,y;
    printf("Enter a Number:");
    scanf("%d",&x);
    printf("Enter the digit to append :");
    scanf("%d",&y);
    printf("After appending the digit %d,the number %d becomes %d",y,x,(x*10+y));
    return 0;
}