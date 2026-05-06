#include <stdio.h>

void giai(float a, float b) {
    if (a == 0) {
        printf(b == 0 ? "Vo so nghiem\n" : "Vo nghiem\n");
    } else {
        printf("x = %.2f\n", -b / a);
    }
}

int main() {
    float a, b;
    printf("Nhap a, b: ");
    scanf("%f %f", &a, &b);

    printf("Ket qua: ");
    giai(a, b);

    return 0;
}