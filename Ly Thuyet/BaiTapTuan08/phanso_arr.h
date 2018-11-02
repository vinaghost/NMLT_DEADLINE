#ifndef _PHANSO_ARR_H_

#define _PHANSO_ARR_H_

#include "phanso.h"

#define MAX_PSO 10000

struct DAYPHANSO {
	PHANSO arrPhanSo[MAX_PSO];
	int N;
};

void NhapDayPhanSo(DAYPHANSO &input);
void XuatDayPhanSo(const DAYPHANSO output);

int TimKiemPhanSo(DAYPHANSO aP, PHANSO q);

PHANSO TongMangPhanSo(DAYPHANSO aP);

void SapXepDayPhanSo(DAYPHANSO &aP);
#endif