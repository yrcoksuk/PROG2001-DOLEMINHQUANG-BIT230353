#include <stdio.h>

// Ham nhan tham so n va tra ve tong 1+2+...+n
int tinhTong(int n) {
    int S = 0;
    for (int i = 1; i <= n; i++)
        S += i;
    return S;
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    int ketQua = tinhTong(n);
    printf("Tong 1+2+...+%d = %d\n", n, ketQua);
    return 0;
}