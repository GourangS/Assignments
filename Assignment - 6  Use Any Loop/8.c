#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){

    int n,cnt=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    int flag = 1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){flag=0;break;}
    }
    if(flag==1)printf("%d is Prime!!!",n);
    else printf("%d is not Prime!!!",n);
    return 0;
}