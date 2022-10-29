#include<stdio.h>
int main(){
    int num,temp,lr,ur,rem,reverse,count=0;
    printf("Enter lower range: ");
    scanf("%d",&lr);
    printf("Enter upper range: ");
    scanf("%d",&ur);
    printf("Palindrome numbers are: ");
    for(num=lr;num<=ur;num++){
        reverse=0;
        for(temp=num;temp!=0;temp/=10){
        rem=temp%10;
        reverse=(reverse*10)+rem;
    }
    if(num==reverse){
        printf("%d  ",num);
        count++;
        }
    }
    printf("\n number of palindromes : %d",count);
    return 0;
}
