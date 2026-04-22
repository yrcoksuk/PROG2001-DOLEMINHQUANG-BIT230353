#include <stdio.h>

struct Owner {
    char ten[50];
    int tuoi;
};

struct Car {
    char model[50];
    int nam;
    struct Owner chuSoHuu;
};

int main() {
    struct Car xe1 = {
        "Toyota Camry",
        2022,
        {"Nguyen Van E", 40}
    };

    printf("Model : %s\n", xe1.model);
    printf("Nam   : %d\n", xe1.nam);
    printf("--- Chu so huu ---\n");
    printf("Ten   : %s\n", xe1.chuSoHuu.ten);
    printf("Tuoi  : %d\n", xe1.chuSoHuu.tuoi);

    return 0;
}