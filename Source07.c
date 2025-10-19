#include <stdio.h>
#include <locale.h>
#include <stdlib.h>  
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "RU");
	char c;
	printf("Введите символ: ");
	scanf("%c", &c);//считывание с консоли
	switch (c)
	{
        // проверка цифр
    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':
        printf("Это цифра.\n");
        break;

        // проверка латинских букв
    case 'a': case 'b': case 'c': case 'd': case 'e': case 'f': case 'g':
    case 'h': case 'i': case 'j': case 'k': case 'l': case 'm': case 'n':
    case 'o': case 'p': case 'q': case 'r': case 's': case 't': case 'u':
    case 'v': case 'w': case 'x': case 'y': case 'z':
        printf("Это буква.\n");
        break;

    default:
        printf("Это не буква и не цифра.\n");
        break;
	}

    system("pause");
    return 0;
}

