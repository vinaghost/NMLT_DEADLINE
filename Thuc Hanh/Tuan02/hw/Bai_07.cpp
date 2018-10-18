#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main()
{
	int n;
	printf("Nhap so tien nguyen: ");
	scanf("%d", &n);

	printf("N = %d d", n);

	printf(" = %d to 10 d", n / 10);
	n %= 10;
	printf(" = %d to 5 d", n / 5);
	n %= 5;
	printf(" = %d to 2 d", n / 2);
	n %= 2;
	printf(" = %d to 1 d", n);



	printf("\n\nCHUONG TRINH KET THUC");
	_getch();
	return 0;
}