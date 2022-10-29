//1-2+3-4+....+N

#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("enter last number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       if(i%2==0)
        sum-=i;
       else
        sum+=i;
    }
    printf("The sum is %d",sum);
    return 0;
}



