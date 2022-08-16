#include<stdio.h>

int main(){

    float cp,sp;
    printf("Enter Cost Price and Selling Price: ");
    scanf("%d%d",&cp,&sp);
    if(sp>=cp){
        float profit = ((sp-cp)/cp * 100);
        printf("The profit percentage is %f",profit);
    }
    else {
        float loss = ((cp-sp)/cp * 100);
        printf("The loss percentage is %f",loss);
    }
    return 0;
}