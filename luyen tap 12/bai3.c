#include <stdio.h>

void giaiBacNhat(float a, float b) {
    printf("Phuong trinh: %.2fx + %.2f = 0\n", a, b);

    if (a == 0) {
        if (b == 0)
            printf("=> Vo so nghiem\n");
        else
            printf("=> Vo nghiem\n");
    } else {
        printf("=> Nghiem: x = %.4f\n", -b / a);
    }
}

int main() {
    float a, b;

    printf("--- Vi du 1: 2x + 6 = 0 ---\n");
    giaiBacNhat(2, 6);

    printf("--- Vi du 2: 0x + 5 = 0 ---\n");
    giaiBacNhat(0, 5);

    printf("--- Vi du 3: 0x + 0 = 0 ---\n");
    giaiBacNhat(0, 0);

    printf("\n--- Nhap tu ban phim ---\n");
    printf("Nhap a, b: ");
    scanf("%f %f", &a, &b);
    giaiBacNhat(a, b);

    return 0;
}