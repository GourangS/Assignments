#include<stdio.h>
#include<ctype.h>

int main(){

    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    if((x%2==0) && (x%3==0))printf("Divisible by 2 and 3");
    else printf("Not Divisible by 2 and 3");
    return 0;
}