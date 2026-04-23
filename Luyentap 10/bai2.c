#include <stdio.h>

int main() {
    int mang_ghi[] = {10, 25, 37, 42, 58, 61, 74, 89, 93, 100};
    int n = sizeof(mang_ghi) / sizeof(mang_ghi[0]);

    FILE *fw = fopen("mang.dat", "wb");
    if (fw == NULL) {
        printf("Khong the tao file!\n");
        return 1;
    }

    fwrite(mang_ghi, sizeof(int), n, fw);
    fclose(fw);

    printf("Da ghi mang vao file 'mang.dat':\n");
    printf("  [ ");
    for (int i = 0; i < n; i++) printf("%d ", mang_ghi[i]);
    printf("]\n\n");

    int mang_doc[10];
    FILE *fr = fopen("mang.dat", "rb");
    if (fr == NULL) {
        printf("Khong the mo file!\n");
        return 1;
    }

    fread(mang_doc, sizeof(int), n, fr);
    fclose(fr);

    printf("Da doc mang tu file:\n");
    printf("  [ ");
    for (int i = 0; i < n; i++) printf("%d ", mang_doc[i]);
    printf("]\n\n");

    printf("==================== KET QUA ====================\n");
    int tatCaDung = 1;

    for (int i = 0; i < n; i++) {
        int dung = (mang_ghi[i] == mang_doc[i]);
        printf("  [%2d] ghi=%-4d | doc=%-4d | %s\n",
               i, mang_ghi[i], mang_doc[i],
               dung ? "DUNG ✓" : "SAI ✗");
        if (!dung) tatCaDung = 0;
    }

    printf("\nTong ket: %s\n",
           tatCaDung ? "Tat ca phan tu DUNG ✓" : "Co phan tu SAI ✗");

    return 0;
}