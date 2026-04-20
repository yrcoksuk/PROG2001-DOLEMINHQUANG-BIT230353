#include <stdio.h>

int findIndex(int a[], int n, int x) {
    for(int i = 0; i < n; i++) {
        if(a[i] == x) return i;
    }
    return -1; // Không tìm thấy
}

int main() {
    int a[] = {10, 20, 30, 40, 50}, x;
    printf("Nhap gia tri can tim: "); scanf("%d", &x);
    int res = findIndex(a, 5, x);
    if(res != -1) printf("Tim thay tai Index: %d\n", res);
    else printf("Khong tim thay!\n");
    return 0;
}