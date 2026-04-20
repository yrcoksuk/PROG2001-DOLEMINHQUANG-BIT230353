#include <stdio.h>

// Ví dụ về biến static để giữ giá trị giữa các lần gọi hàm
void counter() {
    static int count = 0;
    count++;
    printf("Goi lan: %d\n", count);
}

int main() {
    counter(); // In ra 1
    counter(); // In ra 2
    counter(); // In ra 3
    return 0;
}