#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main()
{
	int n;
	printf("Nhap vao N de tinh day Fibonacci toi so thu N: ");
	scanf("%d", &n);
	int Fib = 0, Fib_1 = 1, Fib_2 = 0;

	for (int i = 0; i < n; i++)
	{
		Fib = Fib_1 + Fib_2;
		Fib_2 = Fib_1;
		Fib_1 = Fib;

		printf("So Fibonacci thu %d la %d \n", i, Fib);
	}

	

	printf("\n\nCHUONG TRINH KET THUC");
	_getch();
	return 0;
}
