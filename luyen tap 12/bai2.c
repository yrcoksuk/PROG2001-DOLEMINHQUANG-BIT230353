#include <stdio.h>

int main() {
    printf("Cac so thoa man (tich = 2 x tong 2 chu so):\n");
    int dem = 0;

    for (int i = 10; i <= 99; i++) {
        int hang_chuc = i / 10;
        int hang_don  = i % 10;

        int tich = hang_chuc * hang_don;
        int tong = hang_chuc + hang_don;
        if (tich == 2 * tong) {
            printf("%d  (chu so: %d va %d | tich=%d, 2*tong=%d)\n",
                   i, hang_chuc, hang_don, tich, 2 * tong);
            dem++;
        }
    }

    printf("Tong cong: %d so\n", dem);
    return 0;
}