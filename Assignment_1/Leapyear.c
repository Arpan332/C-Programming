#include <stdio.h>
void main() {
    printf("Name: Arpan Das, Class: MCA1A, Roll: 13\n");
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    //check the year is leapyear or not 
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
}
