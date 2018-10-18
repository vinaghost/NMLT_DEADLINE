#ifndef _FUNCTION_H_

#define _FUNCTION_H_
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define Enter printf("\n");
#define TieuDe printf("CHUONG TRINH XU LY MANG 1 CHIEU\n")

#define MAX_ARRAY 10000

enum SortType {
    TANG,
    GIAM
};
enum SortWhat {
    CUCTRI,
    NON_CUCTRI
};
void ThongBao();

void MenuMain();
void MenuError(const char str[]);
void MenuDone();
void MenuSort(SortWhat What);

void MenuSelectMain();
void MenuSelectSub();
void MenuSelectSort(SortWhat What);

int NhapMang(int a[]);
void XuatMang(int a[], int n, const char info[]);
int ArrayExist(int a[], int n);

void Sort(int a[], int n, SortWhat What, int Type);
void HoanVi(int &a, int &b);

int SoNguyenTo(int n);

int CucTriLanCan(int a[], int n, int NghiNgoCucTri);
void TimCucTriLanCanNguyenTo(int a[], int n);
#endif
