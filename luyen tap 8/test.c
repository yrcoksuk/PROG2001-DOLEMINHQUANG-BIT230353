#include <stdio.h>
int main() {
    int hang, cot;
    printf("Nhap so hang: ");
    scanf("%d", &hang);
    printf("Nhap so cot: ");
    scanf("%d", &cot);
    int matran[hang][cot];
    int chuyenvi[cot][hang];
    printf("Nhap cac phan tu:\n");

    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &matran[i][j]);
        }
    }
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            chuyenvi[j][i] = matran[i][j];
        }
    }
    printf("\nMa tran goc (%d x %d):\n", hang, cot);
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%4d", matran[i][j]);
        }
        printf("\n");
    }
    printf("\nMa tran chuyen vi (%d x %d):\n", cot, hang);
    for (int i = 0; i < cot; i++) {
        for (int j = 0; j < hang; j++) {
            printf("%4d", chuyenvi[i][j]);
        }
        printf("\n");
    }
    return 0;
}