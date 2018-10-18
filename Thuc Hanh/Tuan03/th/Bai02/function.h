#ifndef __FUNCTION_H__
#pragma once
#define __FUNCTION_H__

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define enter printf("\n")
#define TieuDe printf("CHUONG TRINH VE TAM GIAC THHEO YEU CAU\n")

//MENU
void Menu(int sub, int &height, int item, int cls);
void MenuMain(int &height);
void MenuSub1(int &height);
void MenuSub2(int &height);
void MenuSub3(int &height, int item);
void MenuSub4(int &height);
void MenuSub5(int &height);

//SELECT
void MenuSelect(int sub, int &height);
void MenuSelectMain(int menu_id, int &height);
void MenuSelectSub1(int menu_id, int &height);
void MenuSelectSub2(int menu_id, int &height);
void MenuSelectSub3(int menu_id, int &height);

//DRAW
void TamGiacVuongTraiDuoi(int height);
void TamGiacVuongPhaiDuoi(int height);
void TamGiacVuongTraiTren(int height);
void TamGiacVuongPhaiTren(int height);
void TamGiacCanTren(int height);
void TamGiacCanDuoi(int height);


//MISC
void ChonTamGiac(int item, int &height);
#endif