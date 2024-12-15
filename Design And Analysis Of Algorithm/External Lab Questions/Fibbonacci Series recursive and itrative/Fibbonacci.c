#include <stdio.h>

void fibonacci(int n) {
    int fib[n + 2]; // Array to store Fibonacci numbers
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d", fib[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    fibonacci(n);
    return 0;
}
