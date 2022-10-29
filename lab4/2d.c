//1+1/2+1/3+.....+1/N

#include<stdio.h>
int main(){
    int i,n;
    float sum=0;
    printf("enter last number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+ (float)1/i;
    }
    printf("The sum is %.3f",sum);
    return 0;
}



