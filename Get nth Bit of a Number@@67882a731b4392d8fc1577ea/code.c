#include <stdio.h>

int main() {
    int number, n, bit;
    scanf("%d", &number);
    scanf("%d", &n);
    bit = (number >> n) & 1;
    printf("The %dth bit of %d is: %d\n", n, number, bit);

    return 0;
}
