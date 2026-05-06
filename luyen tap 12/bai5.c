#include <stdio.h>

void sapXep(int a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] < a[j]) {
                int tam = a[i];
                a[i] = a[j];
                a[j] = tam;
            }
}

int main() {
    int a[] = {5, 2, 8, 1, 9, 3, 7, 4, 6};
    int n = sizeof(a) / sizeof(a[0]);

    sapXep(a, n);

    printf("Mang giam dan: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);

    return 0;
}