#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
	int n;

	printf("Nhap mot so nguyen duong: ");
	scanf("%d", &n);

	while (n <= 0)
	{
		system("cls");
		printf("\tBAN DA NHAP SAI.\n\tDE NGHI NHAP LAI\n\n");
		printf("Nhap mot so nguyen duong: ");
		scanf("%d", &n);
	}

	printf("So ban da nhap la: %d", n);


	printf("\n\nCHUONG TRINH KET THUC");
	_getch();
	return 0;
}