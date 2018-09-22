#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a, b;
	char dau;
	int agree;

START:printf("Nhap 2 so nguyen a va b ( b khac 0) cach nhau dau khoang trang: ");
	scanf("%d %d", &a, &b);

	printf("Nhap vao 1 ki tu thuoc tap { + , -, *, /}: ");
	getchar();
	dau = getchar();


	switch (dau)
	{
		case '+':
			printf("%d + %d = %d", a, b, a + b);
			break;
		case '-':
			printf("%d - %d = %d", a, b, a - b);
			break;
		case '*':
			printf("%d * %d = %d", a, b, a * b);
			break;
		case '/':
			printf("%d / %d = %f", a, b, a*1.0 / b);
			break;
		default:
			printf("Nhap sai ki tu khong the thuc hien");
	}


	printf("\n\n\nKet thuc chuong trinh NHAP 1");
	printf("\nNHAP 0 neu muon nhap phep tinh khac\n");
	scanf("%d", &agree);

	if (!agree)
	{
		system("cls");
		goto START;
	}
	return 0;

}