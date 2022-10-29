//2*2+4*4+6*6+.....+n*n

#include<stdio.h>
int main(){
    int i,n,sum=1;
    printf("enter last number: ");
    scanf("%d",&n);
    for(i=2;i<=n;i+=2){
        sum*=i*i;
    }
    printf("The sum is %d",sum);
    return 0;
}


