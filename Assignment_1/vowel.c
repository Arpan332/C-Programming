#include <stdio.h>

void main() {
    printf("Name: Arpan Das, Class: MCA1A, Roll: 13\n");
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }
    } else {
        printf("Invalid input! Please enter an alphabet.\n");
    }
}
