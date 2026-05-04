#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Nhap so nguyen duong N: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("%d KHONG phai so nguyen to\n", n);
        return 0;
    }

    int laNguyenTo = 1;
    for (int i = 2; i <= (int)sqrt((double)n); i++) {
        if (n % i == 0) {
            laNguyenTo = 0;
            break;   // tim thay uoc so -> thoat ngay
        }
    }

    if (laNguyenTo)
        printf("%d LA so nguyen to\n", n);
    else
        printf("%d KHONG phai so nguyen to\n", n);

    return 0;
}