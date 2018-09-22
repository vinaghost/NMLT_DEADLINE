#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char kitu;
	int agree, loop = false;

START:printf("Nhap ki tu can chuyen doi (a - z hoac A - Z): ");
	if (loop) // fix loi nhap sai ki tu sau khi quay lai
	{
		getchar();
		kitu = getchar();
	}
	else
		kitu = getchar();  

	// printf("%d %d %d %d, 'a', 'z', 'A', 'Z');

	if (kitu >= 97 && kitu <= 122)
		printf("Ki tu %c duoc chuyen thanh %c", kitu, kitu - 32);
	else if (kitu >= 65 && kitu <= 90)
		printf("Ki tu %c duoc chuyen thanh %c", kitu, kitu + 32);
	else
		printf("%d", kitu);
	
	printf("\n\n\nKet thuc chuong trinh NHAP 1");
	printf("\nNHAP 0 neu muon nhap thang khac\n");
	scanf("%d", &agree);

	if (!agree)
	{
		system("cls");
		loop = true;
		goto START;
	}
	return 0;

}