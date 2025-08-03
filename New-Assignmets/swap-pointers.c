#include <stdio.h>

// Swap function
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("Enter 1st number: ");
    scanf("%d", &x);
    printf("Enter 2nd number: ");
    scanf("%d", &y);

    swap(&x, &y); // pass addresses to swap

    printf("After swapping:\n");
    printf("The first number is %d & the second number is %d\n", x, y);

    return 0;
}
