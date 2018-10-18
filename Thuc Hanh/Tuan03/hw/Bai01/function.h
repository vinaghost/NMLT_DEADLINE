#ifndef _FUNCTION_H_

#define _FUNCTION_H_
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

enum CoBan {
	CONG = 1,
	TRU,
	NHAN,
	CHIA
};
enum LuongGiac {
	SIN = 1,
	COS,
	TAN,
	COT
};
enum PhanSo {
	TU,
	MAU
};
enum Type {
	PT,
	HPT
};

#define Enter printf("\n")
#define TieuDe printf("CHUONG TRINH GIA LAP MAY TINH CASIO\n")
#define Cls system("cls")

#define SIZEPHANSO 2
#define AMOUNTTYPE 2
#define SIZETYPE 20

const char Loai[AMOUNTTYPE][SIZETYPE] = { "Phuong trinh", "He phuong trinh" };

void ThongBao();
void Wait();

void MenuMain();
void MenuError(int MaxItem);
void MenuBack();
void MenuSelectMain();
void MenuSelectSub();

void NhapDuLieu(double &a);
void NhapDuLieu(int &a);

void XuatKetQua(double a);
void XuatKetQua(int a[]);
void XuatKetQua(int Type, int SoNghiem, double x1, double x2);

void ShowPhepTinhCoBan();

double PhepTinhCoBan(CoBan PhepTinh, double a, double b);
int PhepTinhCoBan(CoBan PhepTinh, int a, int b);
double PhepTinhLuongGiac(LuongGiac PhepTinh, double a);
double TriTuyetDoi(double a);
double LuyThua(double CoSo, double SoMu);
double Can(double CoSo, double SoMu);
double Log(double CoSo, double n);
int PhuongTrinhBac1(double a, double b, double &x);
int PhuongTrinhBac2(double a, double b, double c, double &x1, double &x2);
void PhepTinhPhanSo(CoBan PhepTinh, int a[], int b[], int c[]);
void QuyDongPhanSo(int a[], int b[]);
void RutGonPhanSo(int a[]);
int HePhuongTrinhBacNhat2An(double a1, double b1, double c1, double a2, double b2, double c2, double &x, double &y);

void ShowPhepTinhCoBan();
void ShowPhepTinhLuongGiac();
void ShowPhepTinhPhanSo();
void ShowTriTuyetDoi();
void ShowLuyThua();
void ShowCan();
void ShowLog();
//void ShowPhuongTrinhBac1();
void ShowPhuongTrinhBac2();
void ShowHePhuongTrinhBacNhat2An();


int UCLN(int a, int b);
int BCNN(int a, int b);

int DieuKienLog(double CoSo, double n);
int DieuKienLuongGiac(double a);
#endif