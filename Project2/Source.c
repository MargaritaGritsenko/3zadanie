#include <stdio.h>
#include <locale.h>
void main(void)
{
	setlocale(LC_ALL, "RUS");
	printf("%s\n %10d\n %10d\n %13s\n %s\n %s %+08.1f\n", "����:", 4, 333, "_______", "�����:","    ", 4 / 333.);
}