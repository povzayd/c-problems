#include <stdio.h>
int main() {
    int array[] = {12, 23, 4352, 21, 54, 56, 123, 7, 8, 56};
    int n = sizeof(array) / sizeof(array[0]);
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}