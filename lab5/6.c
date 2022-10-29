#include<stdio.h>
int main()
{
 int i,n,count=0;
 printf("Enter a number: ");
  scanf("%d",&n);
    for(i=2;i<n;i++){
      if(n%i==0){
        count++;
      }
    }
      if(count==0){
        printf("%d is Prime",n);
      }
      else{
        printf("%d is Not Prime",n);}
return 0;
}

