
#include<stdio.h>

int main(){

    float inr,usd=76.23;
    printf("Enter the amount in INR :");
    scanf("%f",&inr);
    printf("After conversion , %f INR amounts to %f USD",inr,(inr/usd));
    return 0;
}