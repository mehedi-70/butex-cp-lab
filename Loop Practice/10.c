//C program to find sum of first and last digit of a number
#include<stdio.h>
int main(){
    int num,firstDigit,lastDigit,i;
    printf("Enter number: ");
    scanf("%d",&num);
    lastDigit=num%10;
    for(i=num;i!=0;i/=10){
        firstDigit=i%10;
    }
    printf("sum of first and last digit of %d is %d",num,firstDigit+lastDigit);
return 0;
}
