#include <stdio.h>
int main() {
    printf("Name: Arpan Das, Class: MCA1A, Roll: 13\n");
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    // Check if the character is an alphabet
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is an alphabet.\n", ch);
    }
    // Check if the character is a digit
    else if (ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);
    }
    // If it is neither an alphabet nor a digit, it's a special character
    else {
        printf("%c is a special character.\n", ch);
    }

    return 0;
}
