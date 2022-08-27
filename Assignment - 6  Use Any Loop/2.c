#include<stdio.h>
#include<conio.h>

int main(){

    int n,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=2,c=1;c<=n;i+=2,c++)sum+=i;
    printf("Sum of first %d Even Natural numbers is : %d",n,sum);
    return 0;
}