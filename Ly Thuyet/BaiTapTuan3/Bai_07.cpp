#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double a, b, c, _a, _b, _c;
	int vuong , can , deu;
	int agree;

START:printf("Nhap 3 so thuc duong a, b va c cach nhau dau khoang trang: ");
	scanf("%lf %lf %lf", &a, &b, &c);

	_a = sqrt(a);
	_b = sqrt(b);
	_c = sqrt(c);
	vuong = false;
	can = false;
	deu = false;

	if ((_a + _b >= _c) && (_a + _c >= _b) && (_b + _c >= _a))
	{
		if ((a == b) && (b == c))
			deu = true;
		else if ((a == b) || (b == c) || (a == c))
			can = true;

		if (!deu && ((a + b == c) || (a + c == b) || (b + c == a)))
			vuong = true;

		if (deu)
			printf("Day la tam giac deu.");
		else if (vuong)
		{
			if (can)
				printf("Day la tam giac vuong can.");
			else
				printf("Day la tam giac vuong.");
		}
		else if (can)
			printf("Day la tam giac can.");
		else
			printf("Day la tam giac thuong");

	}
	else
		printf("Khong the lap ra mot tam giac hop le.");


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