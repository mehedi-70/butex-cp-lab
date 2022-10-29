#include<stdio.h>
int main(){
    int menu;
    float far,cel;
    printf("Enter 1 for farenheit to celcius \n");
    printf("Enter 2 for celcius to farenheit \n");
    scanf("%d",&menu);
    switch (menu){
    case 1:
        printf("Enter farenheit temp: ");
        scanf("%f",&far);
        cel = (far-32)/1.8;
        printf("Celcius temp is : %.2f",cel);
        break;

        case 2:
        printf("Enter celcius temp: ");
        scanf("%f",&cel);
        far = (cel*1.8)+32;
        printf("farenheit temp is : %.2f",far);
        break;

        default:
            printf("invalid input");
            break;
    }
    return 0;
}
