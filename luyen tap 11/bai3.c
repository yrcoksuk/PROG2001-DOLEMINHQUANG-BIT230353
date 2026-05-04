#include <stdio.h>

int main() {
    int n;
    printf("Nhap N: ");
    scanf("%d", &n);

    long long tong = 0;
    int dem = 0;
    int soLe = 1;

    while (dem < n) {
        tong += soLe;
        dem++;
        soLe += 2;
    }

    printf("Tong %d so le dau tien = %lld\n", n, tong);
    printf("Kiem tra (n^2 = %d)\n", n * n);
    return 0;
}