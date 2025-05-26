#include <stdio.h>

int main() {
    int choice;

    while (1) {
        long long product = 1;
        int count = 0;
        int i = 10;

        printf("\nВаріант 15: Добуток всіх чисел, кратних 3, у діапазоні [10; 60]\n");
        printf("Оберіть тип циклу:\n");
        printf("1. Цикл for (з параметром)\n");
        printf("2. Цикл while (з передумовою)\n");
        printf("3. Цикл do-while (з післяумовою)\n");
        printf("0. Вихід\n");
        printf("Ваш вибір: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Завершення програми.\n");
            break;
        }

        switch (choice) {
            case 1:
                for (i = 10; i <= 60; i++) {
                    if (i % 3 == 0) {
                        product *= i;
                        count++;
                    }
                }
                break;

            case 2:
                while (i <= 60) {
                    if (i % 3 == 0) {
                        product *= i;
                        count++;
                    }
                    i++;
                }
                break;

            case 3:
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
                continue;
        }

        if (count > 0) {
            printf("Кількість чисел, кратних 3: %d\n", count);
            printf("Добуток цих чисел: %lld\n", product);
        } else {
            printf("У діапазоні [10; 60] немає чисел, кратних 3.\n");
        }
    }

    return 0;
}
