#include<stdio.h>
#include<math.h>
int main(){
    int num,temp,digit=0,rem,sum=0;
    printf("Enter your Number: ");
    scanf("%d",&num);
    for(temp=num;temp!=0;temp/=10){
    digit++;
    }
    for(temp=num;temp!=0;temp/=10){
        rem=temp%10;
        sum+=pow(rem,digit);
    }
    if(num==sum)
        printf("The number is Armstrong");
    else
        printf("The number is not Armstrong");
    return 0;
}
