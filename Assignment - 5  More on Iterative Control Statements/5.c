#include<stdio.h>
#include<conio.h>

int main(){

    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=2*n-1;i>0;i-=2){
        printf("%d\n",i);
    }
    return 0;
}