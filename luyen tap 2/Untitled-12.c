#include <stdio.h>

int main() {
    int a, b;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b (so lan dich): ");
    scanf("%d", &b);

    // Dich phai b lan: tuong duong chia 2^b
    printf("a >> %d = %d\n", b, a >> b);

    // Dich trai b lan: tuong duong nhan 2^b
    printf("a << %d = %d\n", b, a << b);

    return 0;
}