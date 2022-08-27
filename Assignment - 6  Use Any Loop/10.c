#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){

    int n,rev=0,temp;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n){
        temp=n%10;
        n=n/10;
        rev=rev*10+temp;
    }
    printf("Reversed : %d",rev);
    return 0;
}