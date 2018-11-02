#ifndef _SINHVIEN_H_

#include "core.h"
#define _SINHVIEN_H_

#define MAX_SINHVIEN 501

struct SV {
	char HoTen[20];
	int GioiTinh;
	int Lop;
	double DTK;
};
struct DSSV {
	SV arrSV[MAX_SINHVIEN];
	int N;
};

void NhapSinhVien(SV &input, int stt = 0);
void XuatSinhVien(const SV output, int stt = 0);

void NhapDSSinhVien(DSSV &input);
void XuatDSSinhVien(const DSSV ouput, int n = 0);

void HoanVi(SV &a, SV &b);

void SapXepDSSinhVien(DSSV &input);
#endif
