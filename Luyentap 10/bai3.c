#include <stdio.h>
#include <string.h>

typedef struct {
    char  name[100];
    float price;
} Product;

int main() {
    Product mang_ghi[] = {
        {"Laptop Dell",    25000000.0},
        {"Chuot Logitech",   500000.0},
        {"Ban phim AKKO",   1200000.0},
        {"Man hinh LG",     8000000.0},
        {"Tai nghe Sony",   2500000.0}
    };

    int n = sizeof(mang_ghi) / sizeof(mang_ghi[0]);

    FILE *fw = fopen("products.dat", "wb");
    if (fw == NULL) {
        printf("Khong the tao file!\n");
        return 1;
    }

    fwrite(mang_ghi, sizeof(Product), n, fw);
    fclose(fw);
    printf("Da ghi %d san pham vao file 'products.dat'\n\n", n);

    Product mang_doc[5];
    FILE *fr = fopen("products.dat", "rb");
    if (fr == NULL) {
        printf("Khong the mo file!\n");
        return 1;
    }

    fread(mang_doc, sizeof(Product), n, fr);
    fclose(fr);

    printf("==================== KET QUA ====================\n");
    printf("%-5s %-20s %-15s %-15s %s\n",
           "STT", "Ten SP", "Gia ghi", "Gia doc", "Ket qua");
    printf("----------------------------------------------------------\n");

    int tatCaDung = 1;

    for (int i = 0; i < n; i++) {
        int tenDung   = (strcmp(mang_ghi[i].name,  mang_doc[i].name)  == 0);
        int giaDung   = (mang_ghi[i].price == mang_doc[i].price);
        int hangDung  = (tenDung && giaDung);

        printf("%-5d %-20s %-15.0f %-15.0f %s\n",
               i + 1,
               mang_doc[i].name,
               mang_ghi[i].price,
               mang_doc[i].price,
               hangDung ? "DUNG ✓" : "SAI ✗");

        if (!hangDung) tatCaDung = 0;
    }

    printf("----------------------------------------------------------\n");
    printf("Tong ket: %s\n",
           tatCaDung ? "Tat ca san pham DUNG ✓" : "Co san pham SAI ✗");

    return 0;
}