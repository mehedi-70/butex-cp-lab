//C program to print all natural numbers in reverse (from n to 1)
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter last num: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        printf("%d\n",i);
    }
    return 0;
}
