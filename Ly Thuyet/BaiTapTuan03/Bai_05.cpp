#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;
	int agree;

START:printf("Nhap 2 so nguyen a va b cach nhau dau khoang trang: ");
	scanf("%d %d", &a, &b);
	
	if (a - b > 0)
		printf("|%d - %d| = %d", a, b, a - b);
	else if (b - a)
		printf("|%d - %d| = %d", a, b, b -a);
	else 
		printf("|%d - %d| = 0", a, b);

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