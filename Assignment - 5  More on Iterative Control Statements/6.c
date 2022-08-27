#include<stdio.h>
#include<conio.h>

int main(){

    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=2;i<=2*n;i+=2){
        printf("%d\n",i);
    }
    return 0;
}