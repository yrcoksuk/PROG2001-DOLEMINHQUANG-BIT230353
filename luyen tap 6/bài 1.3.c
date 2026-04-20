#include <stdio.h>

// Các hàm thực thi logic
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }

// Hàm nhận callback làm tham số
int calculate(int a, int b, int (*operation)(int, int)) {
    return operation(a, b); // Gọi lại hàm thông qua con trỏ
}

int main() {
    printf("Add: %d\n", calculate(5, 3, add));
    printf("Sub: %d\n", calculate(5, 3, sub));
    return 0;
}