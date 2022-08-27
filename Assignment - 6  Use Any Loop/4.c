#include<stdio.h>
#include<conio.h>

int main(){

    int n,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)sum+=i*i;
    printf("Sum of squares of first %d Natural numbers is : %d",n,sum);
    return 0;
}