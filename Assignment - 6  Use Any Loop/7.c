#include<stdio.h>
#include<conio.h>

int main(){

    int n,cnt=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    int num=n;
    while(num){
        num=num/10;
        cnt++;
    }
    printf("No. of Digits in %d are : %d",n,cnt);
    return 0;
}