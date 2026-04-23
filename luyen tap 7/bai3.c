#include <stdio.h>
int main() {
    int n, a[100];
    printf("Nhap so luong phan tu (n <= 100): ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    int max = a[0], index = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
            index = i;
        }
    }
    printf("Gia tri lon nhat: %d\n", max);
    printf("Chi so (Index): %d\n", index);
    return 0;
}