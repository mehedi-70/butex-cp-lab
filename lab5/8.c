#include<stdio.h>
int main(){
int i,n,count=0;
printf("Enter a Number: ");
scanf("%d",&n);
for(i=n;i!=0;i/=10){
    count++;
}
printf("Number of digits in %d is %d",n,count);
return 0;
}
