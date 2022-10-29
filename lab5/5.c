// Program to calculate the GCD and LCM of two numbers
#include<stdio.h>
int main()
{
    int i,num1,num2,min,gcd,lcm;
    printf("Enter you numbers : ");
    scanf("%d  %d",&num1,&num2);
    min=(num1<num2)?num1:num2;
    for(i=1;i<=min;i++){
        if(num1%i==0 && num2%i==0){
            gcd=i;
        }
    }
    printf("GCD is: %d",gcd);
    lcm=(num1*num2)/gcd;
    printf("\nLCM is: %d",lcm);

    return 0;
}

