#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main()
{
	int a, b;
	printf("Nhap vao 2 so nguyen duong cach nhau dau khoang trang: ");
	scanf("%d %d", &a, &b);

	int t_a = a, t_b = b;

	while (t_a && t_b)
	{
		if (t_a > t_b)
			t_a %= t_b;
		else
			t_b %= t_a;
	}
	int UCLN = (t_a > t_b) ? t_a : t_b;
	int BCNN = (a * b) / UCLN;
	printf("BCNN cua %d va %d la %d", a, b, BCNN);

	printf("\n\nCHUONG TRINH KET THUC");
	_getch();
	return 0;
}
