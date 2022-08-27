#include<stdio.h>
#include<conio.h>

int main(){

    int n,fac=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)fac*=i;
    printf("Factorial of number %d is : %d",n,fac);
    return 0;
}