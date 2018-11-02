#include "phanso.h"

void NhapPhanSo(PHANSO &input, int stt)
{
	if (stt) printf("Nhap phan so thu %d (theo dang a/b): ", stt);
	else
		printf("Nhap phan so (theo dang a/b): ");

	scanf("%d/%d", &input.TUSO, &input.MAUSO);
	//tu va mau cung la dau tru                          //tu va mau khac dau nhung mau la dau tru
	if ((input.TUSO * input.MAUSO > 0 && input.MAUSO < 0) || (input.TUSO * input.MAUSO < 0 && input.MAUSO < 0))
	{
		input.TUSO *= -1;
		input.MAUSO *= -1;
	}

}

void XuatPhanSo(const PHANSO output, int hide)
{
	if (hide)
	{
		if (output.TUSO == output.MAUSO) printf("1");
		else if (output.TUSO == output.MAUSO * -1) printf("-1");
		else if (output.TUSO == 0) printf("0");
		else printf("%d/%d", output.TUSO, output.MAUSO);
	}
	else printf("%d/%d", output.TUSO, output.MAUSO);
}

int UCLN(int a, int b)
{
	if (a < 0) a *= -1;
	if (b < 0) b *= -1;

	while (a*b)
	{
		if (a > b) a -= b;
		else
			b -= a;
	}

	return (a > b ? a : b);
}
void RutGonPhanSo(PHANSO &input)
{
	int temp = UCLN(input.TUSO, input.MAUSO);

	input.TUSO /= temp;
	input.MAUSO /= temp;

}
int SoSanhPhanSo(PHANSO a, PHANSO b)
{
	int temp = a.TUSO * b.MAUSO - b.TUSO * a.MAUSO;
	if (temp > 0) return 1;
	if (temp < 0) return -1;
	return 0;

}

void HoanVi(PHANSO &a, PHANSO &b)
{
	PHANSO temp = a;
	a = b;
	b = temp;
}
PHANSO CongPhanSo(PHANSO a, PHANSO b)
{
	PHANSO KetQua;

	KetQua.TUSO = a.TUSO*b.MAUSO + b.TUSO*a.MAUSO;
	KetQua.MAUSO = a.MAUSO * b.MAUSO;

	RutGonPhanSo(KetQua);
	return KetQua;
}
PHANSO TruPhanSo(PHANSO a, PHANSO b)
{
	b.TUSO *= -1;
	return CongPhanSo(a, b);
}

PHANSO NhanPhanSo(PHANSO a, PHANSO b)
{
	PHANSO KetQua;

	KetQua.TUSO = a.TUSO * b.TUSO;
	KetQua.MAUSO = a.MAUSO * b.MAUSO;

	RutGonPhanSo(KetQua);
	return KetQua;
}
PHANSO ChiaPhanSo(PHANSO a, PHANSO b)
{
	HoanVi(b.TUSO, b.MAUSO);
	if (b.MAUSO < 0) //phan so nghich dao bi dao dau tru xuong mau
	{
		b.TUSO *= -1;
		b.MAUSO *= -1;
	}
	return NhanPhanSo(a, b);
}