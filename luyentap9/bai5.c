#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    int count = 0;

    FILE *fin  = fopen("bai2.txt", "r");
    FILE *fout = fopen("ket_qua_so.txt", "w");

    if (fin == NULL) {
        printf("Khong tim thay file 'bai2.txt'!\n");
        return 1;
    }
    if (fout == NULL) {
        printf("Khong the tao file ket qua!\n");
        fclose(fin);
        return 1;
    }

    while ((ch = fgetc(fin)) != EOF) {
        if (isdigit(ch)) {
            count++;
        }
    }

    fprintf(fout, "File goc  : bai2.txt\n");
    fprintf(fout, "So ky tu chu so: %d\n", count);

    printf("So ky tu chu so: %d\n", count);
    printf("Ket qua da luu vao 'ket_qua_so.txt'\n");

    fclose(fin);
    fclose(fout);
    return 0;
}