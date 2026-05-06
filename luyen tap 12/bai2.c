#include <stdio.h>

int main() {
    printf("Cac so thoa man: ");

    for (int i = 10; i <= 99; i++) {
        int a = i / 10;
        int b = i % 10;

        if (a * b == 2 * (a + b)) {
            printf("%d ", i);
        }
    }

    return 0;
}