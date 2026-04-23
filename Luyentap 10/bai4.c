#include <stdio.h>

int main() {
    int giaTri_ghi = 99999;
    int viTri      = 20;

    FILE *f = fopen("binary.dat", "wb+");
    if (f == NULL) {
        printf("Khong the tao file!\n");
        return 1;
    }

    fseek(f, viTri, SEEK_SET);

    fwrite(&giaTri_ghi, sizeof(int), 1, f);

    printf("Da ghi gia tri %d vao vi tri byte %d\n\n",
           giaTri_ghi, viTri);

    int giaTri_doc = 0;

    fseek(f, viTri, SEEK_SET);

    fread(&giaTri_doc, sizeof(int), 1, f);

    long viTriSauDoc = ftell(f);

    fclose(f);

    printf("==================== KET QUA ====================\n");
    printf("Gia tri ghi vao   : %d\n", giaTri_ghi);
    printf("Gia tri doc ra    : %d\n", giaTri_doc);
    printf("Vi tri con tro    : byte %ld\n", viTriSauDoc);
    printf("Ket qua           : %s\n",
           (giaTri_ghi == giaTri_doc) ? "DUNG ✓" : "SAI ✗");

    return 0;
}