#include <stdio.h>

int main() {
    int arr[] = {10, 20, 5, 8, 70};
    int size = sizeof(arr) / sizeof(arr[0]);

    int first = arr[0];
    int second = -1;

    for (int i = 1; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    printf("Largest: %d\n", first);
    printf("Second Largest: %d\n", second);

    return 0;
}
