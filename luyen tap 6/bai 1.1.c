#include <stdio.h>

int factorial(int n) {
    if (n == 0)   // Điều kiện dừng (base case)
        return 1;
    else
        return n * factorial(n - 1); // Lời gọi đệ quy
}

int main() {
    int n = 5;
    printf("%d! = %d\n", n, factorial(n));
    return 0;
}