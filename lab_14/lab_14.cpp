#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int number;
    printf_s("Press 1 if you want to find the average value .\n" "Press 2 if you want to find the minimum, maximum value and the distance between them..\n" "Enter number 1 or 2: ");
    scanf_s("%d", &number);
        switch (number) {
        case 1: {
            int x;

            // Запитуємо користувача про розмір масиву
            printf_s("Enter size of massive(not more than %d): ", MAX_SIZE);
            scanf_s("%d", &x);

            // Ініціалізуємо масив та вказівники
            int array[MAX_SIZE];
            int* ptr = array;
            int averageValue = 0;

            // Зчитуємо елементи масиву
            printf_s("Enter elements of massive:\n");
            for (int i = 0; i < x; i++) {
                printf_s("array[%d]: ", i);
                scanf_s("%d", &array[i]);
            }
            for (int i = 0; i < x; i++) {
                averageValue += *ptr++;
            }
            averageValue /= x;
            // Виводимо результати
            printf_s("average value: %d\n", averageValue);
        }
              break;
        case 2: {
            int x;

            // Запитуємо користувача про розмір масиву
            printf_s("Enter size of massive(not more than %d): ", MAX_SIZE);
            scanf_s("%d", &x);

            // Ініціалізуємо масив та вказівники
            int array[MAX_SIZE];
            int* minPtr, * maxPtr;

            // Зчитуємо елементи масиву
            printf_s("Enter elements of massive:\n");
            for (int i = 0; i < x; i++) {
                printf_s("arr[%d]: ", i);
                scanf_s("%d", &array[i]);
            }

            // Ініціалізуємо вказівники на перший та останній елементи масиву
            minPtr = &array[0];
            maxPtr = &array[0];

            // Знаходимо мінімум та максимум
            for (int i = 1; i < x; i++) {
                if (*minPtr > array[i]) {
                    minPtr = &array[i];
                }
                if (*maxPtr < array[i]) {
                    maxPtr = &array[i];
                }
            }

            // Знаходимо відстань між позиціями за допомогою адресної арифметики
            int distance = maxPtr - minPtr;

            // Виводимо результати
            printf_s("min value: %d\n", *minPtr);
            printf_s("max value: %d\n", *maxPtr);
            printf_s("Distance between max and min: %d\n", distance);
        }
              break;
        default:
            printf_s("wrong number");
        }
        return 0;
}
              