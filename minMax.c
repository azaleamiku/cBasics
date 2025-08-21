#include <stdio.h>

int main() {
    int arr[] = {5, 2, 9, 1, 7, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (n == 0) {
        printf("Array is empty.\n");
        return 1; 
    }

    int max_val = arr[0];
    int min_val = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }

    printf("Max element: %d\n", max_val);
    printf("Min element: %d\n", min_val);

    return 0;
}