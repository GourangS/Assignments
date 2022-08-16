#include<stdio.h>

int main(){

    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    if(x>99 && x<1000)printf("The number %d is a three digit number",x);
    else printf("The number %d is not a three digit number",x);
    return 0;
}