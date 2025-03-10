#include <stdio.h>

void printFibonacci(int n) {
    int a = 0, b = 1, next;
    
    if (n >= 1) {
        printf("%d ", a);
    }
    if (n >= 2) {
        printf("%d ", b);
    }
    
    for (int i = 3; i <= n; i++) {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }
}

int main() {
    int n;
    
    printf("Enter the number of terms in Fibonacci sequence: ");
    scanf("%d", &n);
    
    printf("Fibonacci sequence up to %d terms:\n", n);
    printFibonacci(n);
    
    return 0;
}
