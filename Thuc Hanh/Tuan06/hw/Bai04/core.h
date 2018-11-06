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
struct ToaDo {
	int x;
	int y;
};
struct List {
	ToaDo arr[MAX_ARRAY][MAX_ARRAY];
	int count;
};
void ThongBao(const char *bai, const char *name);
void ThongBao(const int bai, const char *name);
void DungManHinh(const char *info);


void NhapMang(HaiChieu &input, int Sign = 0);
void XuatMang(int arr[][MAX_ARRAY], int n, int length, int Sign = 0);

int TimPhanTuTrungNhauOHaiMang(int arr1[][MAX_ARRAY], int n1, int length1, int arr2[][MAX_ARRAY], int n2, int length2, ToaDo TrungArr[][MAX_ARRAY]);
int XuatHienTrongMang(int x, int arr[][MAX_ARRAY], int n, int length, ToaDo &DiaChi);
void XuatPhanTuTrungNhau(int arr[][MAX_ARRAY], ToaDo TrungArr[][MAX_ARRAY], int count);
#endif

