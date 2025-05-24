#include <stdio.h>

int main() {
    int n;
    double x;
    double totalSum = 0.0;

    printf("Завдання 3 (варіант 15): Обчислення подвійної суми\n");
    printf("Формула: sum_{i=1}^{n} sum_{j=1}^{n} (x + j) / i\n");

    // Введення та перевірка n
    do {
        printf("Введіть натуральне число n (n >= 1): ");
        scanf("%d", &n);
        if (n < 1) {
            printf("Помилка: n повинно бути ≥ 1. Спробуйте ще раз.\n");
        }
    } while (n < 1);

    // Введення x (дійсне число)
    printf("Введіть дійсне число x: ");
    scanf("%lf", &x);

    // Обчислення подвійної суми
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            totalSum += (x + j) / i;
        }
    }

    printf("Результат обчислення суми: %.6lf\n", totalSum);

    return 0;
}
