#include <stdio.h>
#include <math.h>

int isPrime(int num);
int isArmstrong(int num);
int isPerfect(int num);

int main() {
    printf("Name: Arpan Das, Class: MCA1A, Roll: 13\n");
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if(isPrime(num)){
        printf("%d is a prime number.\n", num);
    }else{
        printf("%d is not a prime number.\n", num);
    }

    if(isArmstrong(num)){
        printf("%d is an Armstrong number.\n", num);
    }else{
        printf("%d is not an Armstrong number.\n", num);
    }

    if(isPerfect(num)){
        printf("%d is a perfect number.\n", num);
    }else{
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}

int isPrime(int num){
    if(num <= 1){
        return 0;
    }
    for(int i = 2; i <num; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}

int isArmstrong(int num){
    int originalNum = num, remainder, sum = 0;
    int n = 0;

    while(originalNum != 0){
        originalNum /= 10;
        n++;
    }

    originalNum = num;
    while(originalNum != 0){
        remainder = originalNum % 10;
        sum += remainder * remainder * remainder;
        originalNum /= 10;
    }

    if(sum == num){
        return 1;
    }else{
        return 0;
    }
}

int isPerfect(int num){
    int sum = 0;

    for(int i = 1; i <= num / 2; i++){
        if(num % i == 0){
            sum += i;
        }
    }
    if(sum == num){
        return 1; 
    } else {
        return 0; 
    }
}
