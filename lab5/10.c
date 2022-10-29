#include<stdio.h>
int main(){
    int i,n,rem,reverse=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(i=n;i!=0;i/=10){
        rem=i%10;
        reverse=(reverse*10)+rem;
    }
    printf("Reverse of %d is %d",n,reverse);
    return 0;
}
