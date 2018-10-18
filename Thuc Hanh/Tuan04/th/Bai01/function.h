#ifndef _FUNCTION_H_

#define _FUNCTION_H_

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define Enter printf("\n");
#define TieuDe printf("CHUONG TRINH XU LY MANG 1 CHIEU\n")

#define MAX_ARRAY 10000

void ThongBao();

void MenuMain();
void MenuError(int Item);
void MenuError2();
void MenuDone();

void MenuSelectMain();
void MenuSelectSub();

int NhapMang(int a[]);
void XuatMang(int a[], int n);

int SoNguyenTo(int n);
void TimNguyenTo(int a[], int n);
int TimMax(int a[], int n);
int TimMin(int a[], int n);
int TimKiem(int BiTim, int a[], int n);

#endif