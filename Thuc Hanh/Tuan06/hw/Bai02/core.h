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

void ThongBao(const char *bai, const char *name);
void ThongBao(const int bai, const char *name);
void DungManHinh(const char *info);


void NhapMang(HaiChieu &input, int Sign = 0);
void XuatMang(int arr[][MAX_ARRAY], int n, int length, int Sign = 0);

void SapXepMangTangTheoCacChieu(HaiChieu &input);
void SapXepMangTangTheoHangGiamTheoCot(HaiChieu &input);
void SapXepMangGiamTheoHangTangTheoCot(HaiChieu &input);

void SapXepTang(MotChieu &input);
void SapXepGiam(MotChieu &input);

void ChuyenDoi(int arr[][MAX_ARRAY], int n, int length, MotChieu &output);
void ChuyenDoi(MotChieu input, int arr[][MAX_ARRAY], int n, int length, int Direction = 0);

void SaoChep(int arr[], int n, MotChieu &output);
void SaoChep(MotChieu input, int arr[], int n);


void HoanVi(int &a, int &b);
#endif

