#include<stdio.h>
#include<string.h>

int main(){

    char c[20];
    scanf("%s",&c);
    char *hour = strtok(c,":");
    char *minute = strtok(NULL,":");
    printf("%s Hour and %s Minute",hour,minute);
    return 0;
}