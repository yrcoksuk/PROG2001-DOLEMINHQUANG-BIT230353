#include <stdio.h>
#include <stdbool.h>   // can cho kieu bool trong C

int main() {
    int   soNguyen = 42;
    float soThuc   = 3.14f;
    char  kyTu     = 'A';
    bool  logic    = true;

    // In tat ca tren mot dong, cach nhau bang dau phay
    printf("%d, %.2f, %c, %d\n", soNguyen, soThuc, kyTu, logic);
    // bool khong co format rieng; dung %d: true=1, false=0

    return 0;
}