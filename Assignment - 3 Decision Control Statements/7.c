#include<stdio.h>

int main(){

    int a,b,c;
    printf("Enter a,b and c of the quadratic equation : ");
    scanf("%d%d%d",&a,&b,&c);
    int d = (b*b - 4*a*c );
    if(d>0)printf("The roots are real");
    else if(d<0)printf("The roots are imaginary");
    else printf("The roots are equal");
    return 0;
}