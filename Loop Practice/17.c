//program in C to display the multiplication table of a given integer.
#include <stdio.h>
int main(){
    int i,j,n;
    printf("Enter your number: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        for(j=1;j<=n;j++){
            printf("%d x %d= %d  ",j,i,i*j);
        }
        printf("\n");
    }
    return 0;
}
