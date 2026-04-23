#include <stdio.h>

int main() {
    FILE *fw = fopen("dulieu.txt", "w");
    if (fw == NULL) {
        printf("Khong the tao file!\n");
        return 1;
    }
    fprintf(fw, "Nguyen_Van_A 20 8.5\n");
    fprintf(fw, "Tran_Thi_B  21 9.0\n");
    fprintf(fw, "Le_Van_C    19 7.5\n");
    fclose(fw);

    FILE *fr = fopen("dulieu.txt", "r");
    if (fr == NULL) {
        printf("Khong the mo file!\n");
        return 1;
    }

    char hoTen[50];
    int  tuoi;
    float diem;

    printf("%-20s %-6s %-5s\n", "Ho Ten", "Tuoi", "Diem");
    printf("------------------------------------\n");

    while (fscanf(fr, "%s %d %f", hoTen, &tuoi, &diem) == 3) {
        printf("%-20s %-6d %-5.1f\n", hoTen, tuoi, diem);
    }

    fclose(fr);
    printf("\nDoc file bang fscanf thanh cong!\n");
    return 0;
}