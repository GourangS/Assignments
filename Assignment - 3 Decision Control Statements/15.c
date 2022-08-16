#include<stdio.h>
#include<ctype.h>

int main(){

    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    if(x>0)printf("Positive Number");
    else if(x<0) printf("Negative Number");
    else printf("Number is zero");
    return 0;
}