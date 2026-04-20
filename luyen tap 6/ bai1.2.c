#include <stdio.h>

// Hàm đệ quy tính tổng từ 1 đến n
int sumRecursive(int n) {
    // 1. Điều kiện dừng: Khi n giảm xuống 1
    if (n == 1) {
        return 1;
    }
    // 2. Lời gọi đệ quy: n + tổng của (n-1)
    return n + sumRecursive(n - 1);
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Vui long nhap n >= 1\n");
    } else {
        int result = sumRecursive(n);
        printf("Tong tu 1 den %d la: %d\n", n, result);
    }

    return 0;
}