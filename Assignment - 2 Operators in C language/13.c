
#include<stdio.h>

int main(){

    int x,y;
    printf("Enter a three-digit number : ");
    scanf("%d",&x);
    y=x%10;
    x=x/10;
    printf("After rotating , number becomes %d",y*100+x);
    return 0;
}