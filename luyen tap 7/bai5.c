#include <stdio.h>

int main() {
    int r, c, a[10][10];
    printf("Nhap so hang va cot: "); scanf("%d %d", &r, &c);
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++) scanf("%d", &a[i][j]);

    printf("Ma tran:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) printf("%d\t", a[i][j]);
        printf("\n");
    }
    return 0;
}