#include <stdio.h>

int main() {
    int n, i, j, isPrime;
    printf("PRIME NUMBER GENERATOR\n");
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d: ", n);

    for (i = 2; i <= n; i++) {
        isPrime = 1; // assume i is prime

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0; // i is not prime
                break;
            }
        }

        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}