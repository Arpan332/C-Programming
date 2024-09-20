#include <stdio.h>

void reverseNumber(int n){
    if (n == 0){
        return;
    } else{
        printf("%d", n % 10); 
        reverseNumber(n / 10);
    }
}

int main(){
    printf("Name:Arpan Das, Class: MCA1A, Roll: 13\n");
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("The reverse of the number is: ");
    reverseNumber(num);
    printf("\n");

    return 0;
}

