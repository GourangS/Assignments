#include<stdio.h>

int main(){

    printf("First 10 even Natural Numbers in Reverse Order\n");
    for(int i= 2*10;i>0;i-=2){
        printf("%d\n",i);
    }
    return 0;
}