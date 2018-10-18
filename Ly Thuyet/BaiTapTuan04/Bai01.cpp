#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

int main()
{
		printf("Nhap mot so nguyen duong: ");
		int n;
		scanf("%d", &n);

		for (int i = 0; i < n; i++)
		{
			printf("%d ", i + 1);
		}
		printf("\n\nCHUONG TRINH KET THUC");
		_getch();
		return 0;
}