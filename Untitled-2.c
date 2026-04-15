#include <stdio.h>
#include <stdbool.h>   // can cho kieu bool trong C

int main() {
    int   soNguyen = 42;
    float soThuc   = 3.14f;
    char  kyTu     = 'A';
    bool  logic    = true;

    printf("%d, %.2f, %c, %d\n", soNguyen, soThuc, kyTu, logic);

    return 0;
}