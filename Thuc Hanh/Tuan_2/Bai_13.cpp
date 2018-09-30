#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main()
{
	int n;
	printf("Nhap vao so tu nhien N: ");
	scanf("%d", &n);
	int S = 0;
	for (int i = 1; i <= n; i++)
	{
		S += i;
	}

	printf("Tong S = %d", S);
	printf("\n\nCHUONG TRINH KET THUC");
	_getch();
	return 0;
}
