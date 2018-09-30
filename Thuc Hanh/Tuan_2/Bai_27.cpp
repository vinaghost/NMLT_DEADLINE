#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main()
{
	int a, t;
	float s;
	printf("Nhap vao so dong, lai suat va so thang cach nhau dau khoang trang: ");
	scanf("%d %f %d", &a, &s, &t);
	float Tong = a;

	for (int i = 1; i <= t; i++)
	{
		Tong += Tong * (s/100);
		printf("%d\t\t%.0f\n", i, Tong);
	}

	printf("\n\nCHUONG TRINH KET THUC");
	_getch();
	return 0;
}
