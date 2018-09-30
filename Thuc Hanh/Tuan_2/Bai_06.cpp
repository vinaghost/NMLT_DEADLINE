#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>

#ifndef M_PI
#    define M_PI 3.14159265358979323846
#endif

int main()
{
	double x;
	printf("Nhap x: ");
	scanf("%lf", &x);

	double y1 = 4 * (x * x + 10 * x*sqrt(x) + 3 * x + 1);
	printf("\ty1 = %.2lf\n", y1);
	double y2 = (sin(M_PI * x * x) + sqrt(x * x + 1)) / (exp(2 * x) + cos(M_PI / 4 * x));
	printf("\ty2 = %.2lf", y2);
	printf("\n\nCHUONG TRINH KET THUC");
	_getch();
	return 0;
}
