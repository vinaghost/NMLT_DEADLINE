#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

#ifndef M_PI
#    define M_PI 3.14159265358979323846
#endif

int main()
{
	float r;
	printf("Nhap ban kinh cua hinh tron: ");
	scanf("%f", &r);
	double S = r * r * M_PI;
	double P = 2 * r * M_PI;
	printf("Chu vi hinh tron la %lf\n", P);
	printf("Dien tich hinh tron la %lf", S);


	printf("\n\nCHUONG TRINH KET THUC");
	_getch();
	return 0;
}
