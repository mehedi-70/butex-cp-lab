//program in C to display n terms of natural numbers and their sum.
#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter last num: ");
    scanf("%d",&n);
    for(i=1;i<=n-1;i++){
        printf("%d+",i);
        sum+=i;
    }
    sum+=n;
    printf("%d = %d",n,sum);
    return 0;
}

