//Program to find the largest between two number
#include<stdio.h>
int main(){
int a,b;
printf("enter first number:");
scanf("%d",&a);
printf("enter second number:");
scanf("%d",&b);
    if(a>b)
    printf("%d is greater than %d",a,b);
    else
        printf("%d is greater than %d",b,a);
    return 0;
}


