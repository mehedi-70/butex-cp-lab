//program to read 10 numbers from keyboard and find their sum and average
#include<stdio.h>
int main(){
    int n,i,sum=0;
    float avg;
    for(i=1;i<=10;i++){
        printf("Num-%d:  ",i);
        scanf("%d",&n);
        sum+=n;
    }
    avg=(float)sum/10;
    printf("sum of the numbers is %d\n",sum);
    printf("Average of the numbers is %.3f",avg);
}
