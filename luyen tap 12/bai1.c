#include <stdio.h>

int main() {
    int a, b, n;
    printf("Nhap a, b, n (a < n, b < n): ");
    scanf("%d %d %d", &a, &b, &n);

    if (a >= n || b >= n || a <= 0 || b <= 0) {
        printf("Dau vao khong hop le!\n");
        return 1;
    }

    long long tong = 0;
    printf("Cac so thoa man: ");

    for (int i = 1; i < n; i++) {
        if (i % a == 0 && i % b != 0) {
            tong += i;
            printf("%d ", i);
        }
    }

    printf("\nTong = %lld\n", tong);
    return 0;
}