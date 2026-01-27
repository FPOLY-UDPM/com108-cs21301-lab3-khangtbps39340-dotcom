#include <stdio.h>

int main() {
    float a, b;

    printf("Nhap a, b: ");
    scanf("%f%f", &a, &b);

    if (a == 0) {
        if (b == 0) printf("Phuong trinh vo so nghiem");
        else printf("Phuong trinh vo nghiem");
    } else {
        printf("x = %.2f", -b / a);
    }

    return 0;
}
