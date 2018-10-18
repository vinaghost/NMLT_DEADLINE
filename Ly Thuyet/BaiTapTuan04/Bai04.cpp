#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main()
{
	int x, S= 0, i;
	for (i = 1; i <= 10; i++)
	{
		printf("Nhap so thu %d: ", i);
		scanf("%d", &x);
		if (!x) break;
		S += x;
	}
	printf("Tong cua %d so vua nhap la: %d", i - 1, S);


	printf("\n\nCHUONG TRINH KET THUC");
	_getch();
	return 0;

}