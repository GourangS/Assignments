#include<stdio.h>

int main(){

    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x&1){
        printf("The number %d is odd",x);
    }
    else{
        printf("The number %d is even",x);
    }
    return 0;
}