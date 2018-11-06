#ifndef _CORE_H_

#define _CORE_H_

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define MAX_ARRAY 500

struct MotChieu {
	int arr[MAX_ARRAY];
	int n;
};

struct HaiChieu {
	int arr[MAX_ARRAY][MAX_ARRAY];
	int n;
	int length;
};
struct ToaDo {
	int arr[MAX_ARRAY][2];
	int count;
};
void ThongBao(const char *bai, const char *name);
void ThongBao(const int bai, const char *name);
void DungManHinh(const char *info);


void NhapMang(HaiChieu &input, int Sign = 0);
void XuatMang(int arr[][MAX_ARRAY], int n, int length, int Sign = 0);

int MinInRow(int arr[][MAX_ARRAY], int length, int x, int Row);
int MaxInColumn(int arr[][MAX_ARRAY], int n, int x, int Column);

int TimPhanTuYenNgua(int arr[][MAX_ARRAY], int n, int length, int SeekerArr[][2]);
void XuatPhanTuYenNgua(int arr[][MAX_ARRAY], int SeekerArr[][2], int count);
#endif

