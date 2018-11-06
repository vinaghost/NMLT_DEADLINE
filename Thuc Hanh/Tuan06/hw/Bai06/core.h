#ifndef _CORE_H_

#define _CORE_H_

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define MAX_ARRAY 50

struct HaiChieu {
	int array[MAX_ARRAY][MAX_ARRAY];
};
struct BaChieu {
	HaiChieu arr[MAX_ARRAY];
	int n;
	int length;
	int height;
};
void ThongBao(const char *bai, const char *name);
void ThongBao(const int bai, const char *name);
void DungManHinh(const char *info);

void NhapMang(BaChieu &input, int Sign = 0);
void TimKiemPhanTuTrongMang(BaChieu input, int x);

#endif

