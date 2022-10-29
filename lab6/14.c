#include<stdio.h>
#include<math.h>
int main(){
    int lr,ur,num,temp,rem,digit,count=0,sum;
    printf("Enter lower limit: ");
    scanf("%d",&lr);
    printf("Enter upper limit: ");
    scanf("%d",&ur);
    for(num=lr; num<=ur; num++){
        sum=0;
        digit=0;
        for(temp=num;temp!=0;temp/=10){
        digit++;
    }
        for(temp=num;temp!=0;temp/=10){
        rem=temp%10;
        sum+=pow(rem,digit);
    }
        if(num==sum){
        printf("%d  ",num);
        count++;
        }
    }
    printf("\nArmstrong numbers are %d",count);
    return 0;
}
