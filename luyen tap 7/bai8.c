#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Nhap chuoi: ");
    fflush(stdin); // Xóa bộ nhớ đệm
    gets(s);

    printf("Chuoi vua nhap: %s\n", s);
    printf("Chieu dai: %lu\n", strlen(s));
    return 0;
}