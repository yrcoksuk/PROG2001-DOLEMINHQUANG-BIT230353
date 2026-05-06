#include <stdio.h>

double tinhTien(double km) {
    double t = 0;
    if (km > 0) t += 15000;              // 1km đầu
    if (km > 1) t += (km > 5 ? 4 : km - 1) * 13000; // Từ km 2 đến 5
    if (km > 5) t += (km - 5) * 11000;   // Từ km 6 trở đi

    return (km > 120) ? t * 0.9 : t;    // Giảm 10% nếu > 120km
}

int main() {
    double km;
    printf("Nhap km: ");
    scanf("%lf", &km);
    printf("Tong tien: %.0f VND\n", tinhTien(km));
    return 0;
}