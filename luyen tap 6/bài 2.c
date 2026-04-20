#include <stdio.h>

// Định nghĩa hàm đệ quy
int sumRecursive(int n) {
    // Điều kiện dừng: Khi n chạm mốc 1
    if (n == 1) {
        return 1;
    }
    // Lời gọi đệ quy
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
        printf("Tong 1 + 2 + ... + %d = %d\n", n, result);
    }

    return 0;
}