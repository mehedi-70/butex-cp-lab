//C program to swap first and last digits of a number
#include<stdio.h>
#include<math.h>
int main(){
    int num,firstDigit,lastDigit,i,digit=0,swappedNum;
    printf("Enter number: ");
    scanf("%d",&num);
    lastDigit=num%10;
    for(i=num;i!=0;i/=10){
        firstDigit=i%10;
    }
    for(i=num;i!=0;i/=10){
        digit++;
    }
    printf("%d",digit);
    swappedNum=lastDigit*pow(10,digit-1);
    swappedNum+=num%(int)pow(10,digit-1);
    swappedNum-=lastDigit;
    swappedNum+=firstDigit;
    printf("\n%d",swappedNum);
return 0;
}

