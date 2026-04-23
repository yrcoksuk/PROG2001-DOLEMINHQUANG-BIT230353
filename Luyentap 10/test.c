#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fTao = fopen("nguon.txt", "w");
    fprintf(fTao, "Xin chao! Day la File Nguon.\n");
    fprintf(fTao, "Chu thuong: abcdefghijklmnopqrstuvwxyz\n");
    fprintf(fTao, "Chu hoa:    ABCDEFGHIJKLMNOPQRSTUVWXYZ\n");
    fprintf(fTao, "So va ky tu: 12345 !@#$%%\n");
    fclose(fTao);

    FILE *fNguon = fopen("nguon.txt", "r");
    if (fNguon == NULL) {
        printf("Khong tim thay file 'nguon.txt'!\n");
        return 1;
    }

    FILE *fDich = fopen("ketqua.txt", "w");
    if (fDich == NULL) {
        printf("Khong the tao file 'ketqua.txt'!\n");
        fclose(fNguon);
        return 1;
    }

    char ch;
    int demDoi = 0;

    while ((ch = fgetc(fNguon)) != EOF) {
        if (islower(ch)) {
            fputc(toupper(ch), fDich);
            demDoi++;
        } else {
            fputc(ch, fDich);
        }
    }

    fclose(fNguon);
    fclose(fDich);

    printf("Sao chep thanh cong!\n");
    printf("So ky tu chu thuong da doi: %d\n", demDoi);
    printf("\nNoi dung file 'ketqua.txt':\n");
    printf("----------------------------\n");

    FILE *fIn = fopen("ketqua.txt", "r");
    while ((ch = fgetc(fIn)) != EOF) {
        putchar(ch);
    }
    fclose(fIn);

    return 0;
}