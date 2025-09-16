#include <stdio.h>
#include <string.h>

int main() {
    char buffer[8];
    int secret = 12345;

    printf("Before safe copy, secret = %d\n", secret);

    strncpy(buffer, "abcdefghijklmnop", sizeof(buffer) - 1);
    buffer[sizeof(buffer) - 1] = '\0';  // ensure null termination

    printf("After safe copy, secret = %d\n", secret);

    return 0;
}
