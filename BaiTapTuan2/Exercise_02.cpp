//Người  dùng  nhập  vào  một  số dương là  diện  tích của  một  hình  tròn.
//Viết  chương  trình  tính  chu  vi  hình  tròn  theo  diện  tích đã  nhập.
// Biết  rằng  PI =  3.14


//VINAGHOST_18CTT2_FIT_KHTN
//12 - 9 - 2018
//Please don't copy my code without permission

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

#define u_PI 3.14

int main()
{
	double s, r;
	int agree;

	START:printf("Nhap dien tich hinh tron: ");
	scanf("%lf", &s);
	
	r = sqrt(s / u_PI);
	
	printf("\aChu vi hinh tron co dien tich %f la %f", s, 2*r*u_PI);

	printf("\nKet thuc chuong trinh NHAP 1");
	printf("\nNHAP 0 neu muon tinh chu vi hinh tron khac\n");
	scanf("%d", &agree);

	if (!agree)
	{
		system("cls");
		goto START;
	}
	return 0;
}