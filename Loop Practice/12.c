//C program to calculate product of digits of a number
#include<stdio.h>
int main(){
    int num,product=1,rem,i;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=num;i!=0;i/=10){
        rem=i%10;
        product*=rem;
    }
    printf("%d",product);
return 0;
}
