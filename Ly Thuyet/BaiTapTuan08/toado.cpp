#include "toado.h"

void NhapDiem2D(Diem2D &P, const char name)
{
	printf("Nhap toa do (theo dang x,y) diem %c: ", name);
	scanf("%lf,%lf", &P.dX, &P.dY);
}

void XuatDiem2D(const Diem2D P, const char name)
{
	printf("%c(%lg, %lg)", name, P.dX, P.dY);
}

double KhoangCach(Diem2D a, Diem2D b)
{
	return sqrt(pow(b.dX - a.dX, 2) + pow(b.dY - a.dY, 2));
}

int TamGiacHopLe(Diem2D a, Diem2D b, Diem2D c)
{
	double Sa, Sb, Sc;
	Sa = KhoangCach(b, c);
	Sb = KhoangCach(a, c);
	Sc = KhoangCach(a, b);

	return ((Sa + Sb >= Sc) && (Sa + Sb >= Sc) && (Sa + Sb >= Sc));
}
double ChuViTamGiac(Diem2D a, Diem2D b, Diem2D c)
{
	double Sa, Sb, Sc;
	Sa = KhoangCach(b, c);
	Sb = KhoangCach(a, c);
	Sc = KhoangCach(a, b);
	return Sa + Sb + Sc;
}
double DienTichTamGiac(Diem2D a, Diem2D b, Diem2D c)
{
	double Sa, Sb, Sc;
	Sa = KhoangCach(b, c);
	Sb = KhoangCach(a, c);
	Sc = KhoangCach(a, b);

	double S, p;
	p = ChuViTamGiac(a, b, c) / 2;
	S = sqrt(p * (p - Sa) * (p - Sb) * (p - Sc));
	return S;
}