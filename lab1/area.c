#include <stdio.h>
main(){
    float base,height,area;
    printf("Enter base:");
    scanf("%f",&base);
    printf("Enter height:");
    scanf("%f",&height);
    area = 0.5*base*height;

    printf("Area is:%.3f",area);

}
