#include<stdio.h>
int main(){
    int lr,ur,num,temp,fact,rem,sum,i,count=0;
    printf("Enter lower range: ");
    scanf("%d",&lr);
    printf("Enter upper range: ");
    scanf("%d",&ur);
    printf("Strong numbers are ");
    for(num=lr;num<=ur;num++){
        sum=0;
        for(temp=num;temp!=0;temp/=10){
        rem=temp%10;
        fact=1;
        for(i=1;i<=rem;i++){
            fact=fact*i;
        }
        sum=sum+fact;
    }
    if(num==sum){
        printf("%d ",num);
        count++;
    }
    }
    printf("\nNumber of strong numbers %d",count);
}
