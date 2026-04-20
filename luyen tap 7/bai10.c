#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Nhap chuoi: "); gets(s);
    int n = strlen(s);

    printf("Chuoi dao nguoc: ");
    for(int i = n - 1; i >= 0; i--) {
        printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}