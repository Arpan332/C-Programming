#include <stdio.h>

int sumOfNaturalNumbers(int n){
    if (n == 1){
        return 1; 
    } else {
        return n + sumOfNaturalNumbers(n - 1); 
    }
}
int main(){
    printf("Name: Arpan Das, Class: MCA1A, Roll: 13\n");
    int n;
    printf("Enter range of natural numbers: ");
    scanf("%d",&n);
    int sum = sumOfNaturalNumbers(n);
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    return 0;
}

