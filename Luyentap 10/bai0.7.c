#include <stdio.h>

int main() {
    FILE *f1 = fopen("file1.txt", "w");
    fprintf(f1, "Day la noi dung FILE 1.\n");
    fprintf(f1, "Dong thu 2 cua file 1.\n");
    fclose(f1);

    FILE *f2 = fopen("file2.txt", "w");
    fprintf(f2, "Day la noi dung FILE 2.\n");
    fprintf(f2, "Dong thu 2 cua file 2.\n");
    fclose(f2);

    FILE *fDich = fopen("file1.txt", "a");
    if (fDich == NULL) {
        printf("Khong the mo file1.txt!\n");
        return 1;
    }

    FILE *fNguon = fopen("file2.txt", "r");
    if (fNguon == NULL) {
        printf("Khong the mo file2.txt!\n");
        fclose(fDich);
        return 1;
    }

    char ch;
    while ((ch = fgetc(fNguon)) != EOF) {
        fputc(ch, fDich);
    }

    fclose(fNguon);
    fclose(fDich);

    printf("Ghep file thanh cong! Ket qua trong file1.txt:\n");
    printf("--------------------------------------------\n");

    FILE *fKetQua = fopen("file1.txt", "r");
    while ((ch = fgetc(fKetQua)) != EOF) {
        putchar(ch);
    }
    fclose(fKetQua);

    return 0;
}