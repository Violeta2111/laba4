#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define PI 3.141592653589793

int main() {
    double a = -PI;
    double b = 2 * PI;
    double dx = PI / 10;
    double x, y;
    int choice;

    do {
        printf("Результати обчислення функції y = ctg(x/2)\n");
        printf("На проміжку [%.2f, %.2f] з кроком %.2f\n\n", a, b, dx);
        printf("+---------------------+----------------------+\n");
        printf("|         x           |        y = ctg(x/2)  |\n");
        printf("+---------------------+----------------------+\n");

        for (x = a; x <= b + dx / 2; x += dx) {
            double half_x = x / 2;
            double tan_val = tan(half_x);

            if (fabs(tan_val) < 1e-10) {
                printf("| %20.10f |     невизначено     |\n", x);
            } else {
                y = 1.0 / tan_val;
                printf("| %20.10f | %20.10f |\n", x, y);
            }
        }

        printf("+---------------------+----------------------+\n");
        printf("\nБажаєте виконати програму ще раз?\n");
        printf("1 - Так\n0 - Вийти\nВаш вибір: ");
        scanf("%d", &choice);
        printf("\n");

    } while (choice == 1);

    printf("Програму завершено.\n");
    return 0;
}
