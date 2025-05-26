#include <stdio.h>

int main() {
    int n;
    double x;
    double totalSum;
    int repeat;

    printf("Завдання 3 (варіант 15): Обчислення подвійної суми\n");
    printf("Формула: sum_{i=1}^{n} sum_{j=1}^{n} (x + j) / i\n");

    do {
        totalSum = 0.0; // обнуляємо суму перед кожним повтором

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

        // Повторне виконання
        printf("Бажаєте виконати програму ще раз? (1 – так, 0 – вихід): ");
        scanf("%d", &repeat);

    } while (repeat == 1);

    printf("Програму завершено.\n");
    return 0;
}
