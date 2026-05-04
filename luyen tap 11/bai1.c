#include <stdio.h>

int main() {
    float diem;
    printf("Nhap diem (0 - 10): ");
    scanf("%f", &diem);

    if (diem < 0 || diem > 10) {
        printf("Diem khong hop le!\n");
        return 1;
    }

    if (diem >= 9.0f)
        printf("Xep loai: Xuat sac\n");
    else if (diem >= 8.0f)
        printf("Xep loai: Gioi\n");
    else if (diem >= 6.5f)
        printf("Xep loai: Kha\n");
    else if (diem >= 5.0f)
        printf("Xep loai: Trung binh\n");
    else
        printf("Xep loai: Yeu\n");

    return 0;
}