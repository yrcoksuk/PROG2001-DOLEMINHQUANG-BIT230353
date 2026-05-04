#include <stdio.h>
#include <string.h>

typedef struct {
    char  name[100];
    float price;
} Product;

void inProduct(Product p, const char* nhan) {
    printf("%s: Ten = %s | Gia = %.2f\n", nhan, p.name, p.price);
}

void soSanh(Product p1, Product p2) {
    printf("\n--- So sanh ---\n");

    // So sanh ten (dung strcmp cua string.h)
    if (strcmp(p1.name, p2.name) == 0)
        printf("Ten: GIONG NHAU (%s)\n", p1.name);
    else
        printf("Ten: KHAC NHAU (%s vs %s)\n", p1.name, p2.name);

    // So sanh gia
    if (p1.price == p2.price)
        printf("Gia: BANG NHAU (%.2f)\n", p1.price);
    else if (p1.price > p2.price)
        printf("Gia: San pham 1 DAT HON (%.2f > %.2f)\n",
               p1.price, p2.price);
    else
        printf("Gia: San pham 2 DAT HON (%.2f > %.2f)\n",
               p2.price, p1.price);

    if (strcmp(p1.name, p2.name) == 0 && p1.price == p2.price)
        printf("=> Hai san pham GIONG HET NHAU\n");
    else
        printf("=> Hai san pham KHAC NHAU\n");
}

int main() {
    Product p1, p2;

    printf("=== Nhap san pham 1 ===\n");
    printf("Ten: ");
    scanf(" %[^\n]", p1.name);
    printf("Gia: ");
    scanf("%f", &p1.price);

    printf("=== Nhap san pham 2 ===\n");
    printf("Ten: ");
    scanf(" %[^\n]", p2.name);
    printf("Gia: ");
    scanf("%f", &p2.price);

    printf("\n");
    inProduct(p1, "San pham 1");
    inProduct(p2, "San pham 2");
    soSanh(p1, p2);

    return 0;
}