#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double x, y, a, b, dx;
    int repeat;

    do {
        // Ввід даних
        printf("Введіть значення a (початок інтервалу): ");
        if (scanf("%lf", &a) != 1) {
            printf("Помилка: Некоректне введення a.\n");
            return 1;
        }

        printf("Введіть значення b (кінець інтервалу): ");
        if (scanf("%lf", &b) != 1) {
            printf("Помилка: Некоректне введення b.\n");
            return 1;
        }

        printf("Введіть значення dx (крок): ");
        if (scanf("%lf", &dx) != 1) {
            printf("Помилка: Некоректне введення dx.\n");
            return 1;
        }

        // Перевірка вхідних значень
        if (a >= b) {
            printf("Помилка: a повинно бути менше b.\n");
            return 1;
        }

        if (dx <= 0) {
            printf("Помилка: dx повинно бути більше 0.\n");
            return 1;
        }

        // Заголовок таблиці
        printf("\nРезультати обчислення функції y = ctg(x/2)\n");
        printf("на проміжку [%.2f, %.2f] з кроком %.2f\n", a, b, dx);
        printf("+----------------------+-------------------------+\n");
        printf("|         x            |       y = ctg(x/2)      |\n");
        printf("+----------------------+-------------------------+\n");

        // Основний цикл
        for (x = a; x <= b + dx / 2; x += dx) {
            double tan_half_x = tan(x / 2.0);

            if (fabs(tan_half_x) < 1e-8) {
                printf("| %20.10f | %23s |\n", x, "невизначено");
            } else {
                y = 1.0 / tan_half_x;
                printf("| %20.10f | %23.10f |\n", x, y);
            }
        }

        printf("+----------------------+-------------------------+\n");

        // Меню повторного запуску
        printf("Бажаєте виконати програму ще раз? (1 – так, 0 – вихід): ");
        scanf("%d", &repeat);

    } while (repeat == 1);

    printf("Програму завершено.\n");

    return 0;
}