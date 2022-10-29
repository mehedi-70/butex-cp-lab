#include<stdio.h>
int main(){
int i,n,rem,sum=0;
printf("Enter a Number: ");
scanf("%d",&n);
for(i=n;i!=0;i/=10){
    rem=i%10;
    sum+=rem;
}
printf("sum of digits in %d is %d",n,sum);
return 0;
}

