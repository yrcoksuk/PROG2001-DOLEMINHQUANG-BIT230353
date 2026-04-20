#include <stdio.h>

int main() {
    int r, c, a[10][10];
    printf("Nhap hang r, cot c: "); scanf("%d %d", &r, &c);
    for(int i=0; i<r; i++) for(int j=0; j<c; j++) scanf("%d", &a[i][j]);

    printf("Ma tran chuyen vi:\n");
    for(int j = 0; j < c; j++) {
        for(int i = 0; i < r; i++) printf("%d\t", a[i][j]);
        printf("\n");
    }
    return 0;
}