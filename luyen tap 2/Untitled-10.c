#include <stdio.h>

int main() {
    int x;
    printf("Nhap x: ");
    scanf("%d", &x);

    x += 5;
    printf("Sau x += 5 : x = %d\n", x);

    x -= 3;
    printf("Sau x -= 3 : x = %d\n", x);

    x *= 2;
    printf("Sau x *= 2 : x = %d\n", x);

    x /= 4;
    printf("Sau x /= 4 : x = %d\n", x);

    return 0;
}