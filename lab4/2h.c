//1+5+9+....+N

#include<stdio.h>
int main(){
    int i=1,n,count,sum=0;
    printf("enter nth number: ");
    scanf("%d",&n);
    for(count=1;count<=n;count++){
        sum+=i;
        i+=4;
    }
    printf("The sum is %d",sum);
    return 0;
}





