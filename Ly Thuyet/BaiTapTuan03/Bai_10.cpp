#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	char kitu;
	int agree, loop = false;

START:printf("Nhap ki tu bat ki trong khoang A - Z: ");

	if(loop) // fix loi nhap sai ki tu sau khi quay lai
	{
		getchar();
		kitu = getchar();
	}
	else
		kitu = getchar();


	switch (kitu)
	{
		case 'a':
		case 'o':
		case 'e':
		case 'u':
		case 'i':
			printf("%c la nguyen am.", kitu);
			break;
		default:
			printf("%c khong la nguyen am.", kitu);
	}

	printf("\n\n\nKet thuc chuong trinh NHAP 1");
	printf("\nNHAP 0 neu muon nhap phep tinh khac\n");
	scanf("%d", &agree);

	if (!agree)
	{
		system("cls");
		loop = true;
		goto START;
	}
	return 0;

}