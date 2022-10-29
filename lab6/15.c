#include<stdio.h>
int main(){
    int num,temp,fact,rem,sum=0,i;
    printf("Enter your Number: ");
    scanf("%d",&num);
    for(temp=num;temp!=0;temp/=10){
        rem=temp%10;
        fact=1;
        for(i=1;i<=rem;i++){
            fact=fact*i;
        }
        sum=sum+fact;
    }
    if(num==sum)
        printf("%d is a Strong Number",num);
    else
        printf("%d is a not Strong Number",num);
    return 0;
}
