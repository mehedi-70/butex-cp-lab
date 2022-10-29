//1*2+2*3+3*4+....n1*n2

#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("enter last number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=i*(i+1);
    }
    printf("The sum is %d",sum);
    return 0;
}




