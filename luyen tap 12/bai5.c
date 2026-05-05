#include <stdio.h>

void inMang(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void sapXepGiamDan(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp  = arr[j];
                arr[j]    = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int mang[] = {5, 2, 8, 1, 9, 3, 7, 4, 6};
    int size = sizeof(mang) / sizeof(mang[0]);

    printf("Truoc khi sap xep: ");
    inMang(mang, size);

    sapXepGiamDan(mang, size);

    printf("Sau khi sap xep  : ");
    inMang(mang, size);

    return 0;
}
