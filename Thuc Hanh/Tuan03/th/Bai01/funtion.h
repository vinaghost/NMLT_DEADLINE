#ifndef __FUNTION_H__
#define __FUNTION_H__

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


#define enter printf("\n")

void LoginInput(int &id, int &pass);
int Login(int id, int pass);

void DiemInPut();

void MenuMain(int &DangNhap);
void MenuSub(int &DangNhap);

void MenuSelectMain(int menu_id, int &DangNhap);
void MenuSelectSub(int menu_id, int &DangNhap);
void MenuSelect(int sub, int &DangNhap);


#endif