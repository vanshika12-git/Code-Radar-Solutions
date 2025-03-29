#include <stdio.h>
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
void factorialRange(int start, int end) {
    if (start < 0 || end < 0) {  
        printf("Invalid range \n");
        return;
    }
    if (start > end) {  
        printf("Invalid range \n");
        return;
    }
    for (int i = start; i <= end; i++) {
        printf("%d\n", factorial(i));

    }
}
