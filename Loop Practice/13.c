//C program to enter a number and print it in words.
#include<stdio.h>
int main(){
    int n,i,rem,reverse=0;
    printf("Enter num: ");
    scanf("%d",&n);
    for(i=n;i!=0;i/=10){
        rem=i%10;
        reverse=(reverse*10)+rem;
    }
    while(reverse!=0){
            switch(reverse%10){
        case 1:
			printf("One ");
			break;

		case 2:
			printf("Two ");
			break;

		case 3:
			printf("Three ");
			break;

		case 4:
			printf("Four ");
			break;

		case 5:
			printf("Five ");
			break;

		case 6:
			printf("Six ");
			break;

		case 7:
			printf("Seven ");
			break;

		case 8:
			printf("Eight ");
			break;

		case 9:
			printf("Nine ");
			break;

		default:
			break;
		}
		reverse/=10;
    }
    return 0;
}

