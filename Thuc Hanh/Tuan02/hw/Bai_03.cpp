#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main()
{
	char KiTu;
	printf("Nhap vao ki tu: ");
	KiTu = getchar();
	printf("\t%d la ma ASCII cua %c\n", KiTu, KiTu);
	int Ascii;
	printf("Nhap so nguyen (1 - 255): ");
	scanf("%d", &Ascii);
	printf("\t%c la ki tu co ma ASCII %d", Ascii, Ascii);


	printf("\n\nCHUONG TRINH KET THUC");
	_getch();
	return 0;
}
