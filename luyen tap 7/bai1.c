#include <stdio.h>

int main() {
    int n, a[100], sum = 0;
    printf("Nhap so phan tu n: "); scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("a[%d] = ", i); scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("Tong cac phan tu: %d\n", sum);
    return 0;
}