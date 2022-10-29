//Program to check grades

#include<stdio.h>
int main(){
int mark,total;
printf("enter total mark:");
scanf("%d",&total);
printf("enter obtained mark:");
scanf("%d",&mark);
if (mark >=0.9*total)
    printf("4.0");
else if (mark>=0.8*total && mark<0.9*total)
    printf("3.5");
else if (mark>=0.7*total && mark<0.8*total)
    printf("3.0");
else if (mark>=0.6*total && mark<0.7*total)
    printf("2.5");
else if (mark>=0.5*total && mark<0.6*total)
    printf("2.0");
else
    printf("0");
    return 0;
}
