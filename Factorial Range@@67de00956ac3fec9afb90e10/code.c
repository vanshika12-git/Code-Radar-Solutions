#include <stdio.h>

// Function to calculate factorial
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
        printf("Factorial of %d is %d\n", i, factorial(i));
    }
}

int main() {
    int start, end;

    // Input range values
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    // Calculate and display the factorials
    factorialRange(start, end);

    return 0;
}