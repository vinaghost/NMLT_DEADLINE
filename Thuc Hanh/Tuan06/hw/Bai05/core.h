#ifndef _CORE_H_

#define _CORE_H_

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define MAX_ARRAY 100

struct MotChieu {
	int arr[MAX_ARRAY];
	int n;
};

struct HaiChieu {
	int arr[MAX_ARRAY][MAX_ARRAY];
	int n;
	int length;
};
void ThongBao(const char *bai, const char *name);
void ThongBao(const int bai, const char *name);
void DungManHinh(const char *info);


void NhapMang(HaiChieu &input, int Sign = 0);
void XuatMang(int arr[][MAX_ARRAY], int n, int length, int Sign = 0);

int MaTranHopLe(int aN, int aLength, int bN, int bLength);
void CongMaTran(int a[][MAX_ARRAY], int b[][MAX_ARRAY], int n, int length, int result[][MAX_ARRAY], int &resultN, int &resultLength);
#endif

