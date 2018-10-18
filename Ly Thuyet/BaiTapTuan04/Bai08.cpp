#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main()
{
	int a, b;
	 
	printf("Nhap 2 so nguyen duong cach nhau dau khoang trang: ");
	scanf("%d %d", &a, &b);

	int c = a, d = b;

	while (c && d)
	{
		if (c > d)
			c %= d;
		else
			d %= c;
	}
	int UCLN = (c > d) ? c : d;

	int BCNN = (a * b) / UCLN;

	printf("BCNN cua %d va %d la %d", a, b, BCNN);

	printf("\n\nCHUONG TRINH KET THUC");
	_getch();

	return 0;
}