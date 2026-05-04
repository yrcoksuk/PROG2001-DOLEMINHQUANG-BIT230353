#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    long long S = 0;
    for (int i = 1; i <= n; i++) {
        S += (long long) i * i;
    }
    printf("S = 1^2 + 2^2 + ... + %d^2 = %lld\n", n, S);
    printf("Kiem tra (n*(n+1)*(2n+1)/6 = %lld)\n",
           (long long)n*(n+1)*(2*n+1)/6);
    return 0;
}