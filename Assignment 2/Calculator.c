#include <stdio.h>

int add(int a,int b){
    return a + b;
}
int subtract(int a,int b){
    return a - b;
}
int multiply(int a,int b){
    return a * b;
}
float divide(int a,int b){
    return (float)a / b;
}
int main() {
    printf("Name: Arpan Das, Class: MCA1A, Roll: 13\n");
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Addition: %d\n", add(num1, num2));
    printf("Subtraction: %d\n", subtract(num1, num2));
    printf("Multiplication: %d\n", multiply(num1, num2));
    printf("Division: %.2f\n", divide(num1, num2));
    return 0;
}


