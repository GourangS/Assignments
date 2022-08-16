#include<stdio.h>

int main(){

    printf("First 10 Even Natural Numbers\n");
    for(int i=2,j=1;j<=10;i+=2,j++){
        printf("%d\n",i);
    }
    return 0;
}