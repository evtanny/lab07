#include <stdio.h>
#include <locale.h>
#include <stdlib.h>  


int main()
{
    setlocale(LC_ALL, "RU");

    int ddmm, day, month;

    printf("Введите дату рождения (в формате ДДММ): ");
    scanf_s("%d", &ddmm);

    day = ddmm / 100;
    month = ddmm % 100;

    switch (month)
    {
    case 1:
        switch (day)
        {
        case 1: case 2: case 3: case 4: case 5:
        case 6: case 7: case 8: case 9: case 10:
        case 11: case 12: case 13: case 14: case 15:
        case 16: case 17: case 18: case 19: 
            printf("знак Зодиака: Козерог"); break;
        default:
            printf("знак Зодиака: Водолей"); break;
        }
        break;

    case 2:
        switch (day)
        {
        case 1: case 2: case 3: case 4: case 5:
        case 6: case 7: case 8: case 9: case 10:
        case 11: case 12: case 13: case 14: case 15:
        case 16: case 17: case 18:
            printf("знак Зодиака: Водолей"); break;
        default:
            printf("знак Зодиака: Рыбы"); break;
        }
        break;

    case 3:
        switch (day)
        {
        case 1: case 2: case 3: case 4: case 5:
        case 6: case 7: case 8: case 9: case 10:
        case 11: case 12: case 13: case 14: case 15:
        case 16: case 17: case 18: case 19: case 20:
            printf("знак Зодиака: Рыбы"); break;
        default:
            printf("знак Зодиака: Овен"); break;
        }
        break;

    case 4:
        switch (day)
        {
        case 1: case 2: case 3: case 4: case 5:
        case 6: case 7: case 8: case 9: case 10:
        case 11: case 12: case 13: case 14: case 15:
        case 16: case 17: case 18: case 19:
            printf("знак Зодиака: Овен"); break;
        default:
            printf("знак Зодиака: Телец"); break;
        }
        break;

    case 5:
        switch (day)
        {
        case 1: case 2: case 3: case 4: case 5:
        case 6: case 7: case 8: case 9: case 10:
        case 11: case 12: case 13: case 14: case 15:
        case 16: case 17: case 18: case 19: case 20:
            printf("знак Зодиака: Телец"); break;
        default:
            printf("знак Зодиака: Близнецы"); break;
        }
        break;

    case 6:
        switch (day)
        {
        case 1: case 2: case 3: case 4: case 5:
        case 6: case 7: case 8: case 9: case 10:
        case 11: case 12: case 13: case 14: case 15:
        case 16: case 17: case 18: case 19: case 20: case 21:
            printf("знак Зодиака: Близнецы"); break;
        default:
            printf("знак Зодиака: Рак"); break;
        }
        break;

    case 7:
        switch (day)
        {
        case 1: case 2: case 3: case 4: case 5:
        case 6: case 7: case 8: case 9: case 10:
        case 11: case 12: case 13: case 14: case 15:
        case 16: case 17: case 18: case 19: case 20: case 21: case 22:
            printf("знак Зодиака: Рак "); break;
        default:
            printf("знак Зодиака: Лев "); break;
        }
        break;

    case 8:
        switch (day)
        {
        case 1: case 2: case 3: case 4: case 5:
        case 6: case 7: case 8: case 9: case 10:
        case 11: case 12: case 13: case 14: case 15:
        case 16: case 17: case 18: case 19: case 20: case 21: case 22:
            printf("знак Зодиака: Лев "); break;
        default:
            printf("знак Зодиака: Дева "); break;
        }
        break;

    case 9:
        switch (day)
        {
        case 1: case 2: case 3: case 4: case 5:
        case 6: case 7: case 8: case 9: case 10:
        case 11: case 12: case 13: case 14: case 15:
        case 16: case 17: case 18: case 19: case 20: case 21: case 22:
            printf("знак Зодиака: Дева "); break;
        default:
            printf("знак Зодиака: Весы "); break;
        }
        break;

    case 10:
        switch (day)
        {
        case 1: case 2: case 3: case 4: case 5:
        case 6: case 7: case 8: case 9: case 10:
        case 11: case 12: case 13: case 14: case 15:
        case 16: case 17: case 18: case 19: case 20: case 21: case 22:
            printf("знак Зодиака: Весы "); break;
        default:
            printf("знак Зодиака: Скорпион "); break;
        }
        break;

    case 11:
        switch (day)
        {
        case 1: case 2: case 3: case 4: case 5:
        case 6: case 7: case 8: case 9: case 10:
        case 11: case 12: case 13: case 14: case 15:
        case 16: case 17: case 18: case 19: case 20: case 21: case 22:
            printf("знак Зодиака: Скорпион "); break;
        default:
            printf("знак Зодиака: Стрелец "); break;
        }
        break;

    case 12:
        switch (day)
        {
        case 1: case 2: case 3: case 4: case 5:
        case 6: case 7: case 8: case 9: case 10:
        case 11: case 12: case 13: case 14: case 15:
        case 16: case 17: case 18: case 19: case 20: case 21:
            printf("знак Зодиака: Стрелец "); break;
        default:
            printf("знак Зодиака: Козерог "); break;
        }
        break;

    default:
        printf("Ошибка: некорректная дата!");
        break;
    }
    system("\n pause");
    return 0;
}
