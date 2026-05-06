#include <stdio.h>

int main() {
    int a, b, n;
    long long tong = 0;

    printf("Nhap a, b, n: ");
    scanf("%d %d %d", &a, &b, &n);

    for (int i = a; i < n; i += a) {
        if (i % b != 0) {
            tong += i;
        }
    }

    printf("Tong = %lld\n", tong);
    return 0;
}