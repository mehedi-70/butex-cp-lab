//60+57+54+...>=1

#include<stdio.h>
int main(){
    int i,sum=0;
    for(i=60;i>=1;i-=3){
       sum+=i;
    }
    printf("The sum is %d",sum);
    return 0;
}

