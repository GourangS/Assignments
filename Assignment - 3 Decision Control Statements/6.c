#include<stdio.h>

int main(){

    int x,y;
    printf("Enter two numbers : ");
    scanf("%d%d",&x,&y);
    if(x>y)printf("%d is greater",x);
    else if(x<y)printf("%d is greater",y);
    else printf("%d is greater",x);
    return 0;
}