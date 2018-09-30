#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>


int main()
{
	int n;
	printf("Nhap vao n: ");
	scanf("%d", &n);
	int s = 0;

	for (int i = 1; i <= n; i++)
	{
		s += pow(i, 2);
	}

	printf("S(%d) = %d", n, s);


	printf("\n\nCHUONG TRINH KET THUC");
	_getch();
	return 0;
}
