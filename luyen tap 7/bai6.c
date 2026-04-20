#include <stdio.h>

int main() {
    int r, c, a[10][10], b[10][10], sum[10][10];
    printf("Nhap hang va cot: "); scanf("%d %d", &r, &c);

    printf("Nhap ma tran A:\n");
    for(int i=0; i<r; i++) for(int j=0; j<c; j++) scanf("%d", &a[i][j]);

    printf("Nhap ma tran B:\n");
    for(int i=0; i<r; i++) for(int j=0; j<c; j++) scanf("%d", &b[i][j]);

    printf("Ma tran ket qua:\n");
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}