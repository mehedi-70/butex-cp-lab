#include<stdio.h>
int main(){
    float a,b,sum,sub,mul,div,remainder;
    char s;
    printf("Enter a calculation: ");
    scanf("%f%c%f",&a,&s,&b);
    switch (s){
    case '+':
        sum = a+b;
    printf("sum is %.2f",sum);
    break;
    case '-':
        sub = a-b;
    printf("minus is %.2f",sub);
    break;
    case '*':
        mul = a*b;
    printf("multiplication is %.2f",mul);
    break;
    case '/':
        div = a/b;
    printf("divide is %.2f",div);
    break;

    case '%':
        remainder = (int)a%(int)b;
        printf("remainder is %.2f",remainder);
        break;
    default:
        printf("invalid");
        break;

    }
    return 0;
}
