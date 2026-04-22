#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f1 = fopen("myfile.txt", "w");
    if (f1 == NULL) {
        printf("Khong the tao file!\n");
        return 1;
    }
    fclose(f1);
    printf("Da tao file: myfile.txt\n");


    system("mkdir C:\\MyFolder 2>nul");

    FILE *f2 = fopen("C:\\MyFolder\\myfile2.txt", "w");
    if (f2 == NULL) {
        printf("Khong the tao file trong C:\\MyFolder!\n");
        return 1;
    }
    fclose(f2);
    printf("Da tao file: C:\\MyFolder\\myfile2.txt\n");

    return 0;
}