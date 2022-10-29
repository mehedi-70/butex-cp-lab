//C program to print multiplication table of any number
#include <stdio.h>
int main(){
    int i,n;
    printf("Enter your number: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("%d x %d= %d\n",n,i,n*i);
    }
    return 0;
}
