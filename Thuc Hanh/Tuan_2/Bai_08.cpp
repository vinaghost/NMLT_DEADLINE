#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main()
{
	float a, b, c;
	printf("Nhap vao 3 canh cua tam giac cach nhau dau khoang trang: ");
	scanf("%f %f %f", &a, &b, &c);
	if ((a + b >= c) && (c + b >= a) && (a + c >= b))
	{
		bool can = false, vuong = false, deu = false;
		if (a == b && a == c)
		{
			deu = true;
		}
		else
		{
			if (a == b && a == c || b == c)
			{
				can = true;
			}
			if ((a*a == b * b + c * c) || (a*a + b * b == c * c) || (a*a + c * c == b * b))
			{
				vuong = true;
			}
		}

		if (can)
		{
			if (deu)
			{
				printf("3 canh tren tao thanh tam giac deu");
			}
			else if (vuong)
			{
				printf("3 canh tren tao thanh tam giac can vuong");
			}
			else
			{
				printf("3 canh tren tao thanh tam giac can");
			}
		}
		else if (vuong)
		{
			printf("3 canh tren tao thanh tam giac vuong");
		}
		else
			printf("3 canh tren tao thanh tam giac thuong");

	}
	else
		printf("3 canh tren khong tao thanh tam giac");


	printf("\n\nCHUONG TRINH KET THUC");
	_getch();
	return 0;
}