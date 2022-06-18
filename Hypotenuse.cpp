#include <stdio.h>
#include <math.h>

double Hypotenuse(double a, double b) {
    return sqrt(a * a + b * b);
}

int main() {
    int i;
    double a, b;
    for (i = 0; i < 3; i++) {
        printf("Enter the sides of the triangle: ");
        scanf("%lf", &a);
        scanf("%lf", &b);
        printf("Hypotenuse of a triangle with sides %.1lf and %.1lf is:  %.1lf\n\n", a, b, Hypotenuse(a, b));
    }
    return 0;
}
