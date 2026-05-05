#include <stdio.h>

int timMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main() {
    int mang[] = {42, 7, -5, 99, 13, 0, -18, 56};
    int size = sizeof(mang) / sizeof(mang[0]);

    printf("Mang: ");
    for (int i = 0; i < size; i++)
        printf("%d ", mang[i]);

    int min = timMin(mang, size);
    printf("\nGia tri nho nhat: %d\n", min);
    return 0;
}