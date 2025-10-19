#include <stdio.h>
#include <locale.h>
#include <stdlib.h>  
#include <math.h>

int main()
{
	setlocale(LC_ALL, "RU");
	float x, y;
	char c;
	puts("Введите числа, с которыми хотите выполнить математические операции:");
	scanf("%f %f", &x, &y);
	getchar();
	puts("Введите матемамтическую операцию:");
	scanf("%c", &c);

	switch (c)
	{
	case '+': printf("Результат сложения: %.1f", x + y); break;
	case '-': printf("Результат разности: %.1f", x - y); break;
	case '*': printf("Результат умножения: %.1f", x * y); break;
	case '/': printf("Результат деления: %.1f", x / y); break;
	case '^': printf("Результат возведения в степень: %.1f", pow(x, y)); break;
	default: puts("Такой математической операции в моём калькуляторе не предусмотрено"); break;
	};

	system("\npause");
	return 0;
}