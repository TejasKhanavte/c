#include <stdio.h>

int main() {
    int n, i = 1;
    unsigned long long factorial = 1;

    do {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    } while (n < 0);

    do {
        factorial *= i;
        i++;
    } while (i <= n);

    printf("Factorial of %d is: %llu\n", n, factorial);
    return 0;
}
