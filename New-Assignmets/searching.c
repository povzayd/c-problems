#include <stdio.h>
int main() {
    int arr[100], n, key, i, flag = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element found at index %d\n", i);
            flag = 1;
            break;
        }
    }
    if(flag == 0) {
        printf("Element not found\n");
    }
    return 0;
}
