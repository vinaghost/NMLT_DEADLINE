#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

#ifndef M_PI
#    define M_PI 3.14159265358979323846
#endif

int main()
{
	float r, h;
	printf("Nhap ban kinh va chieu cao cua hinh tru cach nhau dau khoang trang: ");
	scanf("%f %f", &r, &h);
	double S_day = r * r * M_PI;
	double S_xq = 2 * M_PI * r * h;
	double V = S_day * h;
	printf("Dien tich day cua hinh tru la %lf\n", S_day);
	printf("Dien tich xung quanh cua hinh tru la %lf\n", S_day);
	printf("The tich cua hinh tru la %lf\n", V);


	printf("\n\nCHUONG TRINH KET THUC");
	_getch();
	return 0;
}
