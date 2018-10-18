#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main()
{
	int m, n;

	printf("Nhap M va N cach nhau dau khoang trang: ");
	scanf("%d %d", &m, &n);

	printf("Tich cua 2 so %d va %d là ", m, n);

	int P = 0;

	if (m*n > 0)
	{
		m = (m > 0) ? m : -m;
		n = (n > 0) ? n : -n;
		for (int i = 0; i < m; i++)
		{
			P += n;
		}
	}
	else
	{
		for (int i = 0; i < ( (m > n) ? m : n ); i++) // lay so duong cho vong lap va lay so am de tinh tich
		{
			P += (m < n) ? m : n;
		}
	}

	printf("%d", P);


	printf("\n\nCHUONG TRINH KET THUC");
	_getch();
	return 0;
}