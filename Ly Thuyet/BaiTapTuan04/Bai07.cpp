#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main()
{
	int n;

	printf("Nhap vao mot so nguyen duong: ");
	scanf("%d", &n);

	int Fib = 0;
	int Fib_1 = 1, Fib_2 = 1;

	printf("%d %d ", Fib_1, Fib_2);
	for (int i = 0; i < n - 2; i++)
	{
		Fib = Fib_1 + Fib_2;
		Fib_1 = Fib_2;
		Fib_2 = Fib;
		printf("%d ", Fib);
	}

	printf("\n\nCHUONG TRINH KET THUC");
	_getch();

	return 0;
}