#include "phanso_arr.h"

void NhapDayPhanSo(DAYPHANSO &input)
{
	printf("So luong phan so: ");
	scanf("%d", &input.N);
	for (int i = 0; i < input.N; i++)
	{
		NhapPhanSo(input.arrPhanSo[i], i + 1);
	}
}

void XuatDayPhanSo(const DAYPHANSO output)
{
	for (int i = 0; i < output.N; i++)
	{
		XuatPhanSo(output.arrPhanSo[i]);
		if (i < output.N - 1) printf(", ");
	}
}

int TimKiemPhanSo(DAYPHANSO aP, PHANSO q)
{
	for (int i = 0; i < aP.N; i++)
	{
		if (SoSanhPhanSo(aP.arrPhanSo[i], q) == 0)	return 1;
	}
	return 0;
}
PHANSO TongMangPhanSo(DAYPHANSO aP)
{
	PHANSO s = { 0, 1 };
	for (int i = 0; i < aP.N; i++)
	{
		s = CongPhanSo(s, aP.arrPhanSo[i]);
	}
	return s;
}
void SapXepDayPhanSo(DAYPHANSO &aP)
{
	for (int i = 0; i < aP.N - 1; i++)
	{
		for (int j = i; j < aP.N; j++)
		{
			if (SoSanhPhanSo(aP.arrPhanSo[i], aP.arrPhanSo[j]) == 1) HoanVi(aP.arrPhanSo[i], aP.arrPhanSo[j]);
		}
	}
}