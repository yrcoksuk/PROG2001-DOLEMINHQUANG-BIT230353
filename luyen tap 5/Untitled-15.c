#include <stdio.h>

// Ham nhan 3 tham so, tra ve gia tri lon nhat
int timMax(int a, int b, int c) {
    if (a >= b && a >= c) return a;
    else if (b >= c)      return b;
    else                  return c;
}

int main() {
    int a, b, c;
    printf("Nhap a: "); scanf("%d", &a);
    printf("Nhap b: "); scanf("%d", &b);
    printf("Nhap c: "); scanf("%d", &c);

    int max = timMax(a, b, c);
    printf("Gia tri lon nhat la: %d\n", max);
    return 0;
}