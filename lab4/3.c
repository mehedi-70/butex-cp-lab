//0+1+1+2+3+5+8+.....+Nth term
#include<stdio.h>
int main(){
    int i,n,a=0,b=1,c,sum=0;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=a;
        c=a+b;
        a=b;
        b=c;
    }
    printf("sum is %d",sum);
    return 0;
}
