#include <stdio.h>
#include <locale.h>
#include <stdlib.h>  
#include <math.h>

int main()
{
	setlocale(LC_ALL, "RU");
	float x, y;
	char c;
	puts("������� �����, � �������� ������ ��������� �������������� ��������:");
	scanf("%f %f", &x, &y);
	getchar();
	puts("������� ��������������� ��������:");
	scanf("%c", &c);

	switch (c)
	{
	case '+': printf("��������� ��������: %.1f", x + y); break;
	case '-': printf("��������� ��������: %.1f", x - y); break;
	case '*': printf("��������� ���������: %.1f", x * y); break;
	case '/': printf("��������� �������: %.1f", x / y); break;
	case '^': printf("��������� ���������� � �������: %.1f", pow(x, y)); break;
	default: puts("����� �������������� �������� � ��� ������������ �� �������������"); break;
	};

	system("\npause");
	return 0;
}