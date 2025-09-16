#include <stdio.h>
#include <string.h>

int main() {
    char buffer[5];  // Only space for 4 chars + null terminator

    printf("Enter a short word (max 4 chars): ");
    scanf("%4s", buffer);  // Unsafe: doesn’t check input length

    printf("You entered: %s\n", buffer);

    return 0;
}
