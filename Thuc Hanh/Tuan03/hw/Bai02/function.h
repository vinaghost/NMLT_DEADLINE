#ifndef _FUNCTION_H_
#define _FUNCTION_H_

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define Enter printf("\n")
#define TieuDe printf("CHUONG TRINH NHAP VA HIEN SO TU BAN PHIM\n")
const char So[][6] = { "khong", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin", "muoi" };
const char ViTri[][6] = { "", "muoi", "tram", "nghin", "muoi", "tram", "trieu", "muoi", "tram", "ti"};

void ThongBao();
void YeuCau();
void NhapSo(int &n);
void XuatSo(int n);
void Wait();
int SoThapPhan(int num);
int SoChuSo(int n);
void ChuyenSoThanhChu(int n);
int ChuSoDacBietDuoi(int num);
int ChuSoDacBietDau(int num);
int ChuSoMuoi(int num);
int ChuSoViTri(int n, int ViTri);
#endif
