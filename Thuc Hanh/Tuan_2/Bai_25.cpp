#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int x, n;
	printf("Nhap vao n va x cach nhau dau khoang trang: ");
	scanf("%d %d", &n, &x);
	
	long int s = 0;
	for (int i = 1; i <= n; i++)
	{
		s += pow(x, 2 * i);
	}

	printf("S(%d,%d) = %ld", n, x, s);

	printf("\n\nCHUONG TRINH KET THUC");
	_getch();
	return 0;
}
