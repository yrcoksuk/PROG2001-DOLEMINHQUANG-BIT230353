#include <stdio.h>

int main() {
    int soNguyen;
    printf("Nhap so nguyen: ");
    scanf("%d", &soNguyen);

    float soThuc = (float) soNguyen;
    printf("int -> float: %f\n", soThuc);

    float f = 9.87f;
    int nguyen = (int) f;
    printf("float %.2f -> int: %d\n", f, nguyen);

    return 0;
}