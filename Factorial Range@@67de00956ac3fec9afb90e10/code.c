#include <stdio.h>
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to calculate and display factorials for a range
void factorialRange(int start, int end) {
    for (int i = start; i <= end; i++) {
        printf(" %d! = %d\n", i, factorial(i));
    }
}
