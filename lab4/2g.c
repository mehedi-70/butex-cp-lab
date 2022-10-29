//1*3*4+2*5*6+3*7*8+....n1*n2*n3
#include<stdio.h>
int main(){
    int i,n,count=3,sum=0;
    printf("enter last number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=i*count*(count+1);
        count+=2;
    }
    printf("The sum is %d",sum);
    return 0;
}


