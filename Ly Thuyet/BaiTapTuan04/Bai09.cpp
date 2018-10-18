#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main()
{
	printf("   BANG CUU CHUONG\n");
	for (int i = 1; i <= 9; i++)
	{
		printf("\t| %d |\n\n", i);
		for (int j = 1; j <= 10; j++)
		{
			printf("      %d x %d = %d\n", i, j, i*j);
		}
		printf("======================\n");
	}

	printf("\n\nCHUONG TRINH KET THUC");
	_getch();

	return 0;
}