#include <stdio.h>

int main() {

    /* ===== TEN BIEN HOP LE ===== */
    int soTuoi      = 20;   // hop le: bat dau bang chu cai
    int _diemTrung  = 85;   // hop le: bat dau bang dan gan (_)
    int diemThi2024 = 90;   // hop le: chu + so (so khong dung dau)

    /* ===== TEN BIEN KHONG HOP LE ===== */

    // int 2diemThi;  -> KHONG HOP LE: bat dau bang so
    // int diem-thi;  -> KHONG HOP LE: dau '-' khong duoc phep
    // int int;       -> KHONG HOP LE: "int" la tu khoa (keyword) cua C

    printf("%d, %d, %d\n", soTuoi, _diemTrung, diemThi2024);
    return 0;
}