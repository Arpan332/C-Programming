#include <stdio.h>
void main() {
    printf("Name: Arpan Das, Class: MCA1A, Roll: 13\n");
    int num;
    printf("Enter a number between 100 and 500: \n");
    scanf("%d", &num);
    if(num>100 && num<500){
            if (num%5==0 && num%11==0) {
                printf("%d is divisible by both 5 and 11.\n", num);
            } else {
                printf("%d is not divisible by both 5 and 11.\n", num);
            }
    }else{
	    printf("Invalid Entry !\n");
    }
  }
