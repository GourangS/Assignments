#include<stdio.h>
#include<string.h>

int main(){

    char c[20];
    //char *day,*month,*year;
    scanf("%s",&c);
    char *day = strtok(c,"/");
    char *month=strtok(NULL,"/");
    char *year=strtok(NULL,"/");
    printf("Day - %s , Month - %s , Year - %s",day,month,year);
    return 0;
}