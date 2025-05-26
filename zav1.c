#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    int x, y, z;
    double a;
    bool validInput;
    int repeat;

    printf("Завдання 15: Обчислення a = sqrt(x^2 * y - 14 * z)\n");

    do {
        validInput = false;

        // Цикл перевірки правильності вхідних значень
        do {
            printf("Введіть цілі значення x, y, z через пробіл: ");
            scanf("%d %d %d", &x, &y, &z);

            int sqrt_arg = x * x * y - 14 * z;

            if (sqrt_arg < 0) {
                printf("Помилка: Вираз під коренем (x^2*y - 14*z = %d) < 0. Задайте інші значення.\n", sqrt_arg);
                validInput = false;
            } else {
                a = sqrt(sqrt_arg);
                validInput = true;
            }
        } while (!validInput);

        printf("Вхідні дані коректні.\n");
        printf("Результат a = %.6lf\n", a);

        // Запит на повторне виконання
        printf("Бажаєте виконати програму ще раз? (1 – так, 0 – вихід): ");
        scanf("%d", &repeat);

    } while (repeat == 1);

    printf("Програму завершено.\n");
    return 0;
}
