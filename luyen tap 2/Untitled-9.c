#include <stdio.h>

int main() {
    int a, b;
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai : ");
    scanf("%d", &b);

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);

    // Chia can kiem tra b != 0 de tranh loi chia cho 0
    if (b != 0) {
        printf("%d / %d = %.2f\n", a, b, (float) a / b);
        printf("%d %% %d = %d\n", a, b, a % b);
    } else {
        printf("Khong the chia cho 0!\n");
    }

    return 0;
}