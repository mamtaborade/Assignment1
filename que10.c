#include <stdio.h>
#include <math.h>

// Function to calculate the area of a triangle
float calculateArea(float a, float b, float c) {
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

// Function to calculate the perimeter of a triangle
float calculatePerimeter(float a, float b, float c) {
    return a + b + c;
}

int main() {
    float a, b, c;
    
    // Test values: 3, 4, 5
    a = 3;
    b = 4;
    c = 5;
    printf("For sides %.2f, %.2f, %.2f\n", a, b, c);
    printf("Area: %.2f\n", calculateArea(a, b, c));
    printf("Perimeter: %.2f\n\n", calculatePerimeter(a, b, c));
    
    // Test values: 1, 2, 3
    a = 1;
    b = 2;
    c = 3;
    printf("For sides %.2f, %.2f, %.2f\n", a, b, c);
    printf("Area: %.2f\n", calculateArea(a, b, c));
    printf("Perimeter: %.2f\n\n", calculatePerimeter(a, b, c));
    
    // Test values: 1, 2, 4
    a = 1;
    b = 2;
    c = 4;
    printf("For sides %.2f, %.2f, %.2f\n", a, b, c);
    printf("Area: %.2f\n", calculateArea(a, b, c));
    printf("Perimeter: %.2f\n\n", calculatePerimeter(a, b, c));

    return 0;
}


