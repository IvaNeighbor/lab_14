#include <stdio.h>

int main() {
    int n;

    // Запитуємо користувача про розмір масиву
    printf_s("Введіть розмір масиву: ");
    scanf_s("%d", &n);

    // Ініціалізуємо масив та вказівники
    int array[n];
    int* minPtr, * maxPtr;

    // Зчитуємо елементи масиву
    printf_s("Введіть елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &array[i]);
    }

    // Ініціалізуємо вказівники на перший та останній елементи масиву
    minPtr = &array[0];
    maxPtr = &array[0];

    // Знаходимо мінімум та максимум
    for (int i = 1; i < n; i++) {
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
    printf_s("Мінімальне значення: %d\n", *minPtr);
    printf_s("Максимальне значення: %d\n", *maxPtr);
    printf_s("Відстань між позиціями: %d\n", distance);

    return 0;
}