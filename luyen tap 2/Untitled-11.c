#include <stdio.h>

int main() {
    int n;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    // && kiem tra ca hai dieu kien deu dung
    if (n >= 10 && n <= 50) {
        printf("%d nam trong khoang [10, 50]\n", n);
    } else {
        printf("%d KHONG nam trong khoang [10, 50]\n", n);
    }

    return 0;
}