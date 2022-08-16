#include<stdio.h>

int main(){

    int x;
    for(int i=0;i<5;i++){
        printf("Enter the marks:");
        scanf("%d",&x);
        if(x>=33)printf("Pass\n");
        else printf("Fail\n");
    }

    return 0;
}