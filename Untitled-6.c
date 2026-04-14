#include <stdio.h>
#include <stdbool.h>

int main() {
    int   soNguyen;
    float soThuc;
    char  kyTu;
    int   logicInput;   // nhap 1/0 roi ep sang bool

    printf("Nhap so nguyen : ");
    scanf("%d", &soNguyen);

    printf("Nhap so thuc   : ");
    scanf("%f", &soThuc);

    printf("Nhap ky tu     : ");
    scanf(" %c", &kyTu);   // khoang trang truoc %c de bo '\n' con lai

    printf("Nhap bool (1/0): ");
    scanf("%d", &logicInput);

    bool logic = (bool) logicInput;

    // In tat ca tren mot dong, cach nhau bang dau phay
    printf("\nKet qua: %d, %.2f, %c, %d\n",
           soNguyen, soThuc, kyTu, logic);

    return 0;
}