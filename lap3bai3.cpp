#include <stdio.h>

int main() {
    int kwh;
    float tien;

    printf("Nhap so kWh: ");
    scanf("%d", &kwh);

    if (kwh <= 50) tien = kwh * 1678;
    else if (kwh <= 100) tien = kwh * 1734;
    else if (kwh <= 200) tien = kwh * 2014;
    else if (kwh <= 300) tien = kwh * 2536;
    else if (kwh <= 400) tien = kwh * 2834;
    else tien = kwh * 2927;

    printf("Tien dien = %.0f VND", tien);

    return 0;
}
