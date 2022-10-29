//Program to find leap year

#include<stdio.h>
int main(){
    int year;
    printf("Enter year: ");
    scanf("%d",&year);
    if(year%100==0 && year%400==0)
        printf("%d is a leap year",year);
    else if (year%100!=0 && year %4==0)
        printf("%d is a leap year",year);
    else
        printf("%d is a not a leap year",year);
return 0;
}
