//Program to check pass/fail

#include<stdio.h>
int main(){
int mark,total;
    printf("enter total mark:");
    scanf("%d",&total);
    printf("enter obtained mark:");
    scanf("%d",&mark);
    if(mark >=0.4*total)
        printf("Passed");
        else
        printf("failed");
    return 0;
}
