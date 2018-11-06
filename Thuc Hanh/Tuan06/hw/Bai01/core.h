#ifndef _CORE_H_

#define _CORE_H_

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void DungManHinh(const char *info);
void ThongBao(const int bai, const char *name);

void HoanVi(int &a, int &b);

#define MAX_ARRAY 1002
struct MotChieu {
	int arr[MAX_ARRAY];
	int n;
};

void NhapMang(MotChieu &input, int Sign = 0);
void XuatMang(MotChieu output, int Sign = 0);

void SapXepDoiXung(MotChieu &input);

void DoiXungHoaMang(MotChieu &input);
void DonMangDoiXung(MotChieu &input);

#endif

