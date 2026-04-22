#include <stdio.h>

int main() {
    char ch;
    FILE *f = fopen("bai2.txt", "r");

    if (f == NULL) {
        printf("Khong tim thay file 'bai2.txt'! Hay chay Bai 2 truoc!\n");
        return 1;
    }

    printf("Noi dung file:\n");
    while ((ch = fgetc(f)) != EOF) {
        putchar(ch);
    }

    fclose(f);
    return 0;
}