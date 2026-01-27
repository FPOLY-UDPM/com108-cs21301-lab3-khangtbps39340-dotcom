#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta;

    printf("Nhap a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a == 0) {
        if (b == 0) printf("Vo nghiem");
        else printf("x = %.2f", -c / b);
    } else {
        delta = b*b - 4*a*c;

        if (delta < 0) printf("Vo nghiem");
        else if (delta == 0)
            printf("x = %.2f", -b / (2*a));
        else {
            printf("x1 = %.2f\n", (-b + sqrt(delta)) / (2*a));
            printf("x2 = %.2f", (-b - sqrt(delta)) / (2*a));
        }
    }

    return 0;
}
