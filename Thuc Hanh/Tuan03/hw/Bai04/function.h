#ifndef _FUNCTION_H_
#define _FUNCTION_H_

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define Enter printf("\n")
#define TieuDe printf("CHUONG TRINH TINH CAN BANG PHUONG PHAP NEWTON-RAPHSON\n")

void ThongBao();
void YeuCau();
void NhapSo(double &n);
void NhapSo(int &n);
void XuatSo(double n);
void Wait();

double NewtonRaphson(double S, int n);
int UocLuongSoBo(double S);
int LuyThua10(int n);
double LamTron(double d);
#endif
