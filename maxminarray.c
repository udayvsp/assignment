#include <stdio.h>

void findMinMax(int arr[], int size, int *min, int *max) {
    *min = *max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        } else if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min, max;

    findMinMax(arr, n, &min, &max);

    printf("Minimum Element: %d\n", min);
    printf("Maximum Element: %d\n", max);

    return 0;
}
