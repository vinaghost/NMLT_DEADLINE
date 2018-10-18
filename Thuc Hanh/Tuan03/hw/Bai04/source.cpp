#include "function.h"

void ThongBao()
{
	Enter;
	TieuDe;
	Enter;
}
void Wait()
{
	Enter;
	printf("Nhan Enter de ket thuc chuong trinh");
	getchar();
	getchar();
}
void YeuCau()
{
	printf("Nhap so can lay can: ");
}
void NhapSo(double &n)
{
	scanf("%lf", &n);
}
void NhapSo(int &n)
{
	scanf("%d", &n);
}
void XuatSo(double n)
{
	printf("Ket qua la %lg", n);

}

//thuat toan tham khao
//www.stdio.vn/articles/tinh-can-bac-2-theo-phuong-phap-newton-raphson-35
int UocLuongSoBo(double S)
{
	int i = 0;
	while (S > 10)
	{
		S = S / 10;
		i++;
	}
	i = ((i % 2) ? i - 1 : i) / 2;
	S = (i % 2) ? S * 10 : S;
	if (S < 10)
		return 2 * LuyThua10(i);
	else 
		return 6 * LuyThua10(i);
}

double NewtonRaphson(double S, int n)
{
	if (!n) return UocLuongSoBo(S);
	double temp = NewtonRaphson(S, n - 1);
	temp = (temp * temp + S) / temp;
	
	temp = LamTron(temp) * 1 / 2;
	return temp;
}


int LuyThua10(int n)
{
	int s = 1;
	for (int i = 0; i < n; i++)
	{
		s *= 10;
	}
	return s;
}

double LamTron(double d) //khac phuc loi temp = 0 sau khi nhan 1/2
{
	return floor(d * 1000 + 0.5) / 1000;
}
