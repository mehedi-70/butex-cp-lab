//C program to find sum of all even numbers between 1 to n
#include <stdio.h>
int main(){
    int sum=0,i,n;
    printf("Enter last number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    printf("sum of all even numbers between 1 to %d is %d ",n,sum);

    return 0;
}
