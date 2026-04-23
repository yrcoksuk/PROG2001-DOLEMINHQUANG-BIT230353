#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int  age;
} Student;

int main() {
    Student sv_ghi;
    strcpy(sv_ghi.name, "Nguyen Van A");
    sv_ghi.age = 20;

    FILE *fw = fopen("student.dat", "wb");
    if (fw == NULL) {
        printf("Khong the tao file!\n");
        return 1;
    }

    fwrite(&sv_ghi, sizeof(Student), 1, fw);
    fclose(fw);

    printf("Da ghi Student vao file 'student.dat'\n");
    printf("  Ten : %s\n", sv_ghi.name);
    printf("  Tuoi: %d\n\n", sv_ghi.age);

    Student sv_doc;
    FILE *fr = fopen("student.dat", "rb");
    if (fr == NULL) {
        printf("Khong the mo file!\n");
        return 1;
    }

    fread(&sv_doc, sizeof(Student), 1, fr);
    fclose(fr);

    printf("Da doc Student tu file:\n");
    printf("  Ten : %s\n", sv_doc.name);
    printf("  Tuoi: %d\n\n", sv_doc.age);

    int tenDung  = (strcmp(sv_ghi.name, sv_doc.name) == 0);
    int tuoiDung = (sv_ghi.age == sv_doc.age);

    printf("==================== KET QUA ====================\n");
    printf("Ten  : ghi='%s' | doc='%s' | %s\n",
           sv_ghi.name, sv_doc.name,
           tenDung ? "DUNG ✓" : "SAI ✗");

    printf("Tuoi : ghi=%d   | doc=%d   | %s\n",
           sv_ghi.age, sv_doc.age,
           tuoiDung ? "DUNG ✓" : "SAI ✗");

    return 0;
}