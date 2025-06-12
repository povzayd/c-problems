#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    int type;
    if (ch >= 65 && ch <= 90) type = 1; // Capitaletter
    else if (ch >= 97 && ch <= 122) type = 2; // Small case 
    else if (ch >= 48 && ch <= 57) type = 3; // Digit
    else type = 4; // Symbols

    switch (type) {
        case 1:
            printf("%c is a capital letter.\n", ch);
            break;
        case 2:
            printf("%c is a small case letter.\n", ch);
            break;
        case 3:
            printf("%c is a digit.\n", ch);
            break;
        case 4:
            printf("%c is a special symbol.\n", ch);
            break;
    }

    return 0;
}
//int main()