#ifndef _FUNCTION_H_
#define _FUNCTION_H_

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define Enter printf("\n")
#define TieuDe printf("CHUONG TRINH DOI NAM DUONG LICH SANG NAM AM LICH\n")

#define SoChi 12
#define SoCan 10
#define Length 5
const char Chi[SoChi][Length] = { "Ty'", "Suu", "Dan", "Mao", "Thin", "Ty.", "Ngo", "Mui", "Than", "Dau", "Tuat", "Hoi" }; 
const char Can[SoCan][Length] = { "Giap", "At", "Binh", "Dinh", "Mau", "Ky", "Canh", "Tan", "Nham", "Quy" };


void ThongBao();
void YeuCau();
int NhapNam();
void XuatNam(int n);
void Wait();
#endif
