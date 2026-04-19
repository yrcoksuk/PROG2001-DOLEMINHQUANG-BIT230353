#include <stdio.h>
#include <stdlib.h>

// Ham nhan dia chi 3 bien, tra ve con tro toi ket qua
// Luu y: dung malloc de cap phat bo nho cho ket qua
float* tinhTrungBinh(float* a, float* b, float* c) {
    float* ketQua = (float*) malloc(sizeof(float));
    *ketQua = (*a + *b + *c) / 3.0f;
    return ketQua;
}

int main() {
    float a, b, c;
    printf("Nhap a: "); scanf("%f", &a);
    printf("Nhap b: "); scanf("%f", &b);
    printf("Nhap c: "); scanf("%f", &c);

    // Truyen dia chi cua a, b, c vao ham
    float* tb = tinhTrungBinh(&a, &b, &c);
    printf("Gia tri trung binh: %.2f\n", *tb);

    free(tb);   // giai phong bo nho da cap phat
    return 0;
}