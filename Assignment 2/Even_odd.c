#include <stdio.h>

int isEven(int num){
    if(num % 2 == 0){
        return 1; 
    }else{
        return 0; 
    }
}

int main(){
    printf("Name: Arpan Das, Class: MCA1A, Roll: 13\n");
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if(isEven(num)){
        printf("%d is an even number.\n", num);
    }else{
        printf("%d is an odd number.\n", num);
    }
    return 0;
}

