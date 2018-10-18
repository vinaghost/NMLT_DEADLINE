#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main()
{
	int n;

	printf("Nhap mot so so nguyen duong: ");
	scanf("%d", &n);

	int GiaiThua= 1;

	for (int i = 1; i <= n; i++)
	{
		GiaiThua *= i;
	}

	printf("%d! = %d", n, GiaiThua);

	printf("\n\nCHUONG TRINH KET THUC");
	_getch();

	return 0;
}