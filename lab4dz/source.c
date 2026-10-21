#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    int A, B, C;
    int condition;

    setlocale(LC_CTYPE, "");

    printf("=== КОМАНДА МЕЧТЫ ===\n");
    printf("Введите номера трех игроков (A, B и C): ");
    scanf("%d %d %d", &A, &B, &C);

    condition = (A + B + C) % 3 == 0;

    printf("Сумма номеров: %d\n", A + B + C);
    printf("Тройка счастливая (1 - да, 0 - нет): %d\n", condition);

    return 0;
}