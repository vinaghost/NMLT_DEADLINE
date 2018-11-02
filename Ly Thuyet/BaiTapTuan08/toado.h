#ifndef _TOADO_H_

#define _TOADO_H_

#include "core.h"
#include <math.h>
struct Diem2D {
	double dX;
	double dY;
};

void NhapDiem2D(Diem2D &P, const char name);
void XuatDiem2D(const Diem2D P, const char name);

double KhoangCach(Diem2D a, Diem2D b);

int TamGiacHopLe(Diem2D a, Diem2D b, Diem2D c);
double DienTichTamGiac(Diem2D a, Diem2D b, Diem2D c);
double ChuViTamGiac(Diem2D a, Diem2D b, Diem2D c);

#endif