#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int diem;
	int agree;

START:printf("Nhap diem theo thang diem 100: ");
	scanf("%d", &diem);

	printf("Danh gia: ");
	if (diem >= 90)
		printf("Great Work!");
	else if (diem >= 80)
		printf("Good Jobs!");
	else if (diem >= 70)
		printf("Good Try!");
	else if (diem >= 60)
		printf("Study Harder!");
	else
		printf("Tutoring is available");


	printf("\n\n\nKet thuc chuong trinh NHAP 1");
	printf("\nNHAP 0 neu muon nhap so diem khac\n");
	scanf("%d", &agree);

	if (!agree)
	{
		system("cls");
		goto START;
	}
	return 0;

}