#include <stdio.h>
#include <locale.h>
#include <stdlib.h>  


int main()
{
    setlocale(LC_ALL, "RU");

    int ddmm, day, month;

    printf("������� ���� �������� (� ������� ����): ");
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
            printf("���� �������: �������"); break;
        default:
            printf("���� �������: �������"); break;
        }
        break;

    case 2:
        switch (day)
        {
        case 1: case 2: case 3: case 4: case 5:
        case 6: case 7: case 8: case 9: case 10:
        case 11: case 12: case 13: case 14: case 15:
        case 16: case 17: case 18:
            printf("���� �������: �������"); break;
        default:
            printf("���� �������: ����"); break;
        }
        break;

    case 3:
        switch (day)
        {
        case 1: case 2: case 3: case 4: case 5:
        case 6: case 7: case 8: case 9: case 10:
        case 11: case 12: case 13: case 14: case 15:
        case 16: case 17: case 18: case 19: case 20:
            printf("���� �������: ����"); break;
        default:
            printf("���� �������: ����"); break;
        }
        break;

    case 4:
        switch (day)
        {
        case 1: case 2: case 3: case 4: case 5:
        case 6: case 7: case 8: case 9: case 10:
        case 11: case 12: case 13: case 14: case 15:
        case 16: case 17: case 18: case 19:
            printf("���� �������: ����"); break;
        default:
            printf("���� �������: �����"); break;
        }
        break;

    case 5:
        switch (day)
        {
        case 1: case 2: case 3: case 4: case 5:
        case 6: case 7: case 8: case 9: case 10:
        case 11: case 12: case 13: case 14: case 15:
        case 16: case 17: case 18: case 19: case 20:
            printf("���� �������: �����"); break;
        default:
            printf("���� �������: ��������"); break;
        }
        break;

    case 6:
        switch (day)
        {
        case 1: case 2: case 3: case 4: case 5:
        case 6: case 7: case 8: case 9: case 10:
        case 11: case 12: case 13: case 14: case 15:
        case 16: case 17: case 18: case 19: case 20: case 21:
            printf("���� �������: ��������"); break;
        default:
            printf("���� �������: ���"); break;
        }
        break;

    case 7:
        switch (day)
        {
        case 1: case 2: case 3: case 4: case 5:
        case 6: case 7: case 8: case 9: case 10:
        case 11: case 12: case 13: case 14: case 15:
        case 16: case 17: case 18: case 19: case 20: case 21: case 22:
            printf("���� �������: ��� "); break;
        default:
            printf("���� �������: ��� "); break;
        }
        break;

    case 8:
        switch (day)
        {
        case 1: case 2: case 3: case 4: case 5:
        case 6: case 7: case 8: case 9: case 10:
        case 11: case 12: case 13: case 14: case 15:
        case 16: case 17: case 18: case 19: case 20: case 21: case 22:
            printf("���� �������: ��� "); break;
        default:
            printf("���� �������: ���� "); break;
        }
        break;

    case 9:
        switch (day)
        {
        case 1: case 2: case 3: case 4: case 5:
        case 6: case 7: case 8: case 9: case 10:
        case 11: case 12: case 13: case 14: case 15:
        case 16: case 17: case 18: case 19: case 20: case 21: case 22:
            printf("���� �������: ���� "); break;
        default:
            printf("���� �������: ���� "); break;
        }
        break;

    case 10:
        switch (day)
        {
        case 1: case 2: case 3: case 4: case 5:
        case 6: case 7: case 8: case 9: case 10:
        case 11: case 12: case 13: case 14: case 15:
        case 16: case 17: case 18: case 19: case 20: case 21: case 22:
            printf("���� �������: ���� "); break;
        default:
            printf("���� �������: �������� "); break;
        }
        break;

    case 11:
        switch (day)
        {
        case 1: case 2: case 3: case 4: case 5:
        case 6: case 7: case 8: case 9: case 10:
        case 11: case 12: case 13: case 14: case 15:
        case 16: case 17: case 18: case 19: case 20: case 21: case 22:
            printf("���� �������: �������� "); break;
        default:
            printf("���� �������: ������� "); break;
        }
        break;

    case 12:
        switch (day)
        {
        case 1: case 2: case 3: case 4: case 5:
        case 6: case 7: case 8: case 9: case 10:
        case 11: case 12: case 13: case 14: case 15:
        case 16: case 17: case 18: case 19: case 20: case 21:
            printf("���� �������: ������� "); break;
        default:
            printf("���� �������: ������� "); break;
        }
        break;

    default:
        printf("������: ������������ ����!");
        break;
    }
    system("\n pause");
    return 0;
}
