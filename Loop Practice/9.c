//C program to find first and last digit of a number
#include<stdio.h>
int main(){
    int num,firstDigit,lastDigit,i;
    printf("Enter number: ");
    scanf("%d",&num);
    lastDigit=num%10;
    for(i=num;i!=0;i/=10){
        firstDigit=i%10;
    }
    printf("First digit of %d is %d",num,firstDigit);
    printf("Last digit of %d is %d",num,lastDigit);
return 0;
}
