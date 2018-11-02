#ifndef _PHANSO_H_

#define _PHANSO_H_

#include "core.h"

struct PHANSO {
	int TUSO;
	int MAUSO;
};


void NhapPhanSo(PHANSO &input, int stt = 0);
void XuatPhanSo(const PHANSO output, int hide = 0);

void RutGonPhanSo(PHANSO &input);
int UCLN(int a, int b);

int SoSanhPhanSo(PHANSO a, PHANSO b);

void HoanVi(PHANSO &a, PHANSO &b);

PHANSO CongPhanSo(PHANSO a, PHANSO b);
PHANSO TruPhanSo(PHANSO a, PHANSO b);

PHANSO NhanPhanSo(PHANSO a, PHANSO b);
PHANSO ChiaPhanSo(PHANSO a, PHANSO b);
#endif
