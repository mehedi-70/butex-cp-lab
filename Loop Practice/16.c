//program in C to display the cube of the number upto given an integer.
#include<stdio.h>
#include<math.h>
int main(){
    int n,i,cube;
    printf("Enter last number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        cube=pow(i,3);
        printf("Cube of %d is %d\n",i, cube);
    }
    return 0;
}
