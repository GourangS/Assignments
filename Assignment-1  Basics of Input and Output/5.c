#include<stdio.h>

int main(){

    char c[20]="Hello World";
    int len = printf("%s",c);
    printf("\n%d",len);
    return 0;
}