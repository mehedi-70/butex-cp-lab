//1*1+3*3+5*5+.....+n*n

#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("enter last number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i+=2){
        sum+=i*i;
    }
    printf("The sum is %d",sum);
    return 0;
}

