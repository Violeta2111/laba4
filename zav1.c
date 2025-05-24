#include <stdio.h>
#include <math.h>    // для sqrt
#include <stdbool.h> // для bool

int main() {
    int x, y, z;
    double a;
    bool validInput = false;

    printf("Завдання 15: Обчислення a = sqrt(x^2 * y - 14 * z)\n");

    // Цикл перевірки правильності вхідних значень
    do {
        printf("Введіть цілі значення x, y, z через пробіл: ");
        scanf("%d %d %d", &x, &y, &z);

        // Обчислення підкореневого виразу
        int sqrt_arg = x * x * y - 14 * z;

        // Перевірка на коректність підкореневого виразу
        if (sqrt_arg < 0) {
            printf("Помилка: Вираз під коренем (x^2*y - 14*z = %d) < 0. Задайте інші значення.\n", sqrt_arg);
            validInput = false;
        } else {
            a = sqrt(sqrt_arg); // Обчислення значення функції
            validInput = true;
        }

    } while (!validInput);

    printf("Вхідні дані коректні.\n");
    printf("Результат a = %.6lf\n", a);

    return 0;
}
