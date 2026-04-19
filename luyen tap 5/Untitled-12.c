#include <stdio.h>
#define PI 3.14159

float calculateArea(float radius) {
    return PI * radius * radius;
}

int main() {
    float radius = 5.5f;
    float area = calculateArea(radius);
    printf("The area of the circle with radius %.2f is: %.2f\n",
           radius, area);
    return 0;
}