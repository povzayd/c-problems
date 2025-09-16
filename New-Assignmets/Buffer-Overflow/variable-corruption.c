#include <stdio.h>
#include <string.h>

int main() {
    char buffer[8];
    int secret = 12345;

    printf("Before overflow, secret = %d\n", secret);

    // Unsafe copy - deliberately writes more than 8 bytes
    strcpy(buffer, "abcdefghijklmnop");

    printf("After overflow, secret = %d\n", secret);

    return 0;
}
