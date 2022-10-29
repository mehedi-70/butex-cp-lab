//c program to find the perfect numbers within a given number of range.
#include<stdio.h>
int main(){
    int lr,ur,i,n,sum,count=0;
    printf("Enter lower range: ");
    scanf("%d",&lr);
    printf("Enter upper range: ");
    scanf("%d",&ur);
    printf("Perfect numbers between %d and &d are: ",lr,ur);
    for(n=lr;n<=ur;n++){
        sum=0;
        for(i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(n==sum){
        printf("%d ",n);
        count++;
    }
    }
    printf("Number of Perfects : %d",count);

return 0;}
