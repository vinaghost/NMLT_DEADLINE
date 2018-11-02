#include "core.h"

void DungManHinh(const char *info)
{
	printf("\n\nNhan Enter de %s chuong trinh", info);
	getchar();
	getchar();
}

void ThongBao(const int bai, const char *name)
{
	system("cls");
	if (bai)
		printf("BAI %d: CHUONG TRINH %s \n\n", bai, name);
	else
		printf("%s\n\n", name);
}
void HoanVi(int &a, int &b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}
void HoanVi(double &a, double &b)
{
	double temp = a; // tranh tinh trang tran so
	a = b;
	b = temp;
}
void HoanVi(char *a, char *b) // tham khao tu stackoverflow.com/questions/27843126/swap-two-strings-in-c
{
	char *temp = a;
	a = b;
	b = temp;

}