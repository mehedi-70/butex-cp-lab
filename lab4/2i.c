//1+2+4+5+7+8+......+N
#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("enter last number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       if(i%3!=0)
        sum+=i;
       else
        sum+=0;
    }
    printf("The sum is %d",sum);
    return 0;
}

