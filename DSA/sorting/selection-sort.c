#include <stdio.h>
int main() {
    int array[] = {12, 23, 4352, 21, 54, 56, 123, 7, 8, 56};
    int n = sizeof(array) / sizeof(array[0]);
    int i, j, loc, temp;
    for (i = 0; i < n - 1; i++) {
        loc = i;
        for (j = i + 1; j < n; j++) {
            if (array[j] < array[loc]) {
                loc = j;
            }
        }
        temp = array[loc];
        array[loc] = array[i];
        array[i] = temp;
    }
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}