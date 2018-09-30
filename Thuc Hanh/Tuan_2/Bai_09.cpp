#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main()
{
	char Kitu;
	printf("Nhap vao ki tu can chuyen doi: ");
	Kitu = getchar();
	printf("Ki tu %c duoc chuyen thanh %c", Kitu, Kitu ^ 0x20);


	printf("\n\nCHUONG TRINH KET THUC");
	_getch();
	return 0;
}
