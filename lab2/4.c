//Program to find the smallest between three numbers

#include<stdio.h>
int main(){
int a,b,c;
printf("enter first number:");
scanf("%d",&a);
printf("enter second number:");
scanf("%d",&b);
printf("enter third number:");
scanf("%d",&c);
    if(a<c && a<b)
    printf("%d is the smallest",a);
    else if(b<c && b<a)
    printf("%d is the smallest",b);
    else
        printf("%d is the smallest",c);
    return 0;
}

