#include <stdio.h>

int findSmallestMissingPositive(int arr[], int n) {
    int i, j;
    for (i = 0, j = 0; i < n; i++) {
        if (arr[i] > 0) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
    for (i = 0; i < j; i++) {
        int val = abs(arr[i]);
        if (val <= j && arr[val - 1] > 0) {
            arr[val - 1] = -arr[val - 1];
        }
    }
    for (i = 0; i < j; i++) {
        if (arr[i] > 0) {
            return i + 1;
        }
    }
    return j + 1;
}
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int result = findSmallestMissingPositive(arr, n);
    printf("Smallest missing positive integer: %d\n", result);
    return 0;
}