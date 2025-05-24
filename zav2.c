#include <stdio.h>

int main() {
    int choice;
    long long product = 1;
    int count = 0;

    printf("Варіант 15: Добуток всіх чисел, кратних 3, у діапазоні [10; 60]\n");
    printf("Оберіть тип циклу:\n");
    printf("1. Цикл for (з параметром)\n");
    printf("2. Цикл while (з передумовою)\n");
    printf("3. Цикл do-while (з післяумовою)\n");
    printf("Ваш вибір: ");
    scanf("%d", &choice);

    int i = 10;

    switch (choice) {
        case 1: // Цикл з параметром
            for (i = 10; i <= 60; i++) {
                if (i % 3 == 0) {
                    product *= i;
                    count++;
                }
            }
            break;

        case 2: // Цикл з передумовою
            while (i <= 60) {
                if (i % 3 == 0) {
                    product *= i;
                    count++;
                }
                i++;
            }
            break;

        case 3: // Цикл з післяумовою
            do {
                if (i % 3 == 0) {
                    product *= i;
                    count++;
                }
                i++;
            } while (i <= 60);
            break;

        default:
            printf("Некоректний вибір. Спробуйте ще раз.\n");
            return 1;
    }

    if (count > 0) {
        printf("Кількість чисел, кратних 3: %d\n", count);
        printf("Добуток цих чисел: %lld\n", product);
    } else {
        printf("У діапазоні [10; 60] немає чисел, кратних 3.\n");
    }

    return 0;
}
