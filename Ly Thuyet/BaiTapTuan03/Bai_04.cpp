#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float a, b, c;
	double denta, x1, x2;
	int agree;

START:printf("Nhap 3 so thuc a, b va c cach nhau dau khoang trang: ");
	scanf("%f %f %f", &a, &b, &c);
	if( a )
	{
		denta = b * b - 4 * a*c;

		if (denta > 0)
		{
			x1 = (b - sqrt(denta)) / (2 * a);
			x2 = (b + sqrt(denta)) / (2 * a);
			printf("Phuong trinh %fx2 +%fx + %f = 0 co 2 nghiem phan biet\n", a, b, c);
			printf("x1 = %lf\n", x1);
			printf("x2 = %lf", x2);
		}
		else if ( denta < 0)
			printf("Phuong trinh %fx2 +%fx + %f = 0 vo nghiem", a, b, c);
		else
		{
			x1 = b/ (2 * a);
			printf("Phuong trinh %fx2 +%fx + %f = 0 co 1 nghiem kep\n", a, b, c);
			printf("x1 = %lf\n", x1);
		}
	}
	else
	{
		if( b )
		{
			x1 = - c / b;
			printf("Phuong trinh %fx + %f = 0 co 1 nghiem\n", b, c);
			printf("x1 = %lf\n", x1);
		}
		else 
		{
			if( c )
			{
				printf("Phuong trinh %fx + %f = 0 vo nghiem", b, c);
			}
			else 
			{
				printf("Phuong trinh %fx + %f = 0 co vo so nghiem", b, c);
			}
		}
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