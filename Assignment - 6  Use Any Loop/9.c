#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){

    int a,b;
    int x,y,temp;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    x=a;y=b;
    while(y!=0){
        temp=y;
        y=x%y;
        x=temp;
    }
    int hcf = x;
    int lcm = (a*b)/hcf;
    printf("LCM of %d and %d is %d",a,b,lcm);
    return 0;
}