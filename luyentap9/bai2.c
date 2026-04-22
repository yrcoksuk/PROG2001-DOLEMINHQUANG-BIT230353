#include <stdio.h>

int main() {
    char text[1000];
    FILE *f = fopen("bai2.txt", "w");

    if (f == NULL) {
        printf("Khong the mo file!\n");
        return 1;
    }

    printf("Nhap doan text can ghi vao file: ");
    fgets(text, sizeof(text), stdin);

    fprintf(f, "%s", text);
    fclose(f);

    printf("Da ghi vao file 'bai2.txt' thanh cong!\n");
    return 0;
}