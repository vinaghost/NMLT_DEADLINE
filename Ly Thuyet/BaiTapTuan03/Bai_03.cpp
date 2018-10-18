#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int thang;
	int agree;

START:printf("Nhap thang cua nam Duong lich va khong nhuan: ");
	scanf("%d", &thang);

	printf("Thang %d co ", thang);
	switch (thang)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31 ngay.");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30 ngay.");
			break;
		case 2:
			printf("28 ngay.");
			break;
	}


	printf("\n\n\nKet thuc chuong trinh NHAP 1");
	printf("\nNHAP 0 neu muon nhap thang khac\n");
	scanf("%d", &agree);

	if (!agree)
	{
		system("cls");
		goto START;
	}
	return 0;

}