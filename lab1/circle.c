#include <stdio.h>
main(){
    float r,area;
    const pi = 3.14;
    printf("Enter radius:");
    scanf("%f",&r);
    area = pi*r*r;
    printf("Area is: %f",area);
    return 0;

}
