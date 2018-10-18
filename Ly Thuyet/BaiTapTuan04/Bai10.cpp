#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main()
{
	int height;
	printf("Nhap chieu cao cua tam giac Pascal: ");
	scanf("%d", &height);
	for (int i = 0; i < height; i++)
	{
		int j;
		for (j = 0; j < (height - i); j++)
		{
			printf("\t");
		}
		for (j = 0; j <= i; j++)
		{
			int c = 1, n = i;

			for (int k = 1; k <= j; k++, n--)
				c = c * n / k;

			printf("%d\t\t", c);
			if (j == i) printf("\n");
		}
	}
	printf("\n\nCHUONG TRINH KET THUC");
	_getch();
	return 0;
}