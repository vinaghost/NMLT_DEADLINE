#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main()
{
	int n;

	printf("Nhap mot so nguyen duong: ");
	scanf("%d", &n);

	int temp = n;
	int num = 0;

	do
	{
		num++;
		temp /= 10;
	} while (temp > 0);

	int i;
	int S = 0, dec = 1;

	for (i = 0; i < (num - 1); i++)
	{
		dec *= 10;
	}
	temp = n;
	for (i = 0; i < num; i++)
	{
		S += (temp / dec);
		temp %= dec;
		dec /= 10;
	}
	printf("So %d co %d chu so va tong cac chu so la %d", n, num, S);


	printf("\n\nCHUONG TRINH KET THUC");
	_getch();
	return 0;
}