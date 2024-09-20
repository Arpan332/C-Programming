#include <stdio.h>

void swapByValue(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("\nInside swapByValue:\n");
    printf("a = %d, b = %d\n", a, b);
}

void swapByReference(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    printf("Name: Arpan Das, Class: MCA1A, Roll: 13\n");
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nOriginal values:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    swapByValue(num1, num2);
    printf("\nAfter swapByValue\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    swapByReference(&num1, &num2);
    printf("\nAfter swapByReference\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}



