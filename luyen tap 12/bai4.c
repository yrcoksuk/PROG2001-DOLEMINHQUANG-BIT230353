#include <stdio.h>

int timMin(int a[], int n) {
    int min = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] < min) min = a[i];
    return min;
}

int main() {
    int mang[] = {42, 7, -5, 99, 13, 0, -18, 56};
    int n = sizeof(mang) / sizeof(mang[0]);

    printf("Min = %d\n", timMin(mang, n));

    return 0;
}