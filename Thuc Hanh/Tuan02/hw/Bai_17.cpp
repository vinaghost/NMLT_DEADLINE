#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int DonBoDemn() // nguon tu stackoverflow.com/questions/14099473/how-to-scanf-only-integer-and-repeat-reading-if-the-user-enter-non-numeric-chara
{
	while (getchar() != '\n');
	return 1;
}

int is_SoNguyenTo(int n)
{
	if (n < 0) return 0;

	if (n == 0 || n == 1) return 0;

	for (int i = 2; i < n; i++)
	{
		if ( !(n % i))
			return 0;
	}
	return 1;
}
int main()
{
	int n;
	char c; 
	bool first = true;
	do
	{
		if (first)
		{
			first = false;
		}
		else 
		{
			system("cls");
			printf("Ban chi co the nhap so. De nghi nhap lai\n");
		}
		printf("Nhap vao so can kiem tra: ");

	} while (((scanf("%d%c", &n, &c) != 2 || c != '\n') && DonBoDemn()));
	
	printf("So ban nhap %s so nguyen to", (is_SoNguyenTo(n) ? "la" : "khong la"));
	
	printf("\n\nCHUONG TRINH KET THUC");
	_getch();
	return 0;
}
