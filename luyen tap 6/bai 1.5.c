#include <stdio.h>

// Truyền địa chỉ để hoán đổi giá trị gốc
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 3, y = 5;
    printf("Truoc khi swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("Sau khi swap: x = %d, y = %d\n", x, y);
    return 0;
}