#include <stdio.h>
#include <stdbool.h>

int main() {
    int   soNguyen;
    float soThuc;
    char  kyTu;
    int   logicInput;   

    printf("Nhap so nguyen : ");
    scanf("%d", &soNguyen);

    printf("Nhap so thuc   : ");
    scanf("%f", &soThuc);

    printf("Nhap ky tu     : ");
    scanf(" %c", &kyTu);   

    printf("Nhap bool (1/0): ");
    scanf("%d", &logicInput);

    bool logic = (bool) logicInput;

    printf("\nKet qua: %d, %.2f, %c, %d\n",
           soNguyen, soThuc, kyTu, logic);

    return 0;
}