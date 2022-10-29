#include <stdio.h>

main (){
    float a,b,c,sum,avg ;

    scanf("%f%f%f", &a, &b,&c);
    sum = a+b+c;
    avg = sum/3;
    printf("%.2f",avg);

    return 0;


}
