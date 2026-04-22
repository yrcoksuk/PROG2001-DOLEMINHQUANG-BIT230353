#include <stdio.h>
#include <string.h>

struct Student {
    int mssv;
    char ten[50];
};

int main() {
    struct Student sv1;
    sv1.mssv = 12345;
    strcpy(sv1.ten, "Nguyen Van A");

    printf("MSSV : %d\n", sv1.mssv);
    printf("Ten  : %s\n", sv1.ten);

    return 0;
}