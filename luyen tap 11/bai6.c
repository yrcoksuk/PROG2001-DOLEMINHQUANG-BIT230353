#include <stdio.h>

long long tongBinhPhuong(int n) {
    if (n == 0)
        return 0;
    return (long long)n * n + tongBinhPhuong(n - 1);
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    long long S = tongBinhPhuong(n);
    printf("S = 1^2 + 2^2 + ... + %d^2 = %lld\n", n, S);
    return 0;
}
