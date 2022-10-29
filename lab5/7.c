#include<stdio.h>
int main()
{
 int lr, ur, i, n, flag, temp, count = 0;
  printf("Enter lower range: ");
  scanf("%d", &lr);
  printf("Enter upper range: ");
  scanf("%d", &ur);
  printf("Prime numbers are\n");
  for (n=lr;n<=ur;n++)
  {
     flag = 0;
     for (i = 2; i <= n / 2; i++)
     {
        if ((n % i) == 0)
        {
           flag = 1;
           break;
        }
    }
    if (flag == 0)
    {
       printf("%d  ", n);
       count++;
    }
  }
  printf("\n Number of primes between %d and %d is %d",lr,ur,count);
}


