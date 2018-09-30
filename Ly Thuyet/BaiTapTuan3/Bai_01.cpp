#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c;
	int agree;

START:printf("Nhap cac so a, b va c cach nhau dau khoang trang: ");
	scanf("%d %d %d", &a, &b, &c);

	printf("So lon nhat trong 3 so %d, %d va %d la ", a, b, c);
	if (a < b) a = b;
	if (a < c) a = c;

	printf("%d", a);

	printf("\n\n\nKet thuc chuong trinh NHAP 1");
	printf("\nNHAP 0 neu muon nhap 3 so khac\n");
	scanf("%d", &agree);

	if (!agree)
	{
		system("cls");
		goto START;
	}
	return 0;
	
}