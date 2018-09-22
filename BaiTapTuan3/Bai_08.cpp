#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nam;
	int agree;

START:printf("Nhap nam Duong lich: ");
	scanf("%d", &nam);
	
	if ((!(nam % 4) && (nam % 100)) || !(nam % 400)) // chia het cho 4 nhung khong chia het cho 100 va chia het cho 400
		printf("Day la nam nhuan.");
	else
		printf("Day khong la nam nhuan.");


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