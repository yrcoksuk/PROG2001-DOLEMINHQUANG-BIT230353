#include <stdio.h>

struct Employee {
    int id;
    char ten[50];
    float luong;
};

int main() {
    struct Employee danhSach[3] = {
        {1, "Tran Thi B", 15000000},
        {2, "Le Van C",   20000000},
        {3, "Pham Thi D", 18000000}
    };

    for (int i = 0; i < 3; i++) {
        printf("--- Nhan vien %d ---\n", i + 1);
        printf("ID    : %d\n",  danhSach[i].id);
        printf("Ten   : %s\n",  danhSach[i].ten);
        printf("Luong : %.0f VND\n", danhSach[i].luong);
    }

    return 0;
}