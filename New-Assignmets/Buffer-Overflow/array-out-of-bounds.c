#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    printf("Valid access:\n");
    printf("arr[0] = %d\n", arr[0]);
    printf("arr[4] = %d\n", arr[4]);

    printf("\nNow let’s try invalid access:\n");
    printf("arr[82] = %d  <-- OUT OF BOUNDS!\n", arr[82]);

    return 0;
}
