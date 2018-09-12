//Viết chương  trình  yêu  cầu  người  dùng  nhập  vào  hai  số nguyên  val1  và  val2  (val2  != 0) 
//và lưu  các  giá  trị này  vào  biến  kiểu  int tương  ứng.
//Tiếp  theo,  chương  trình  thực  hiện  các  phép  toán  cơ  bản  trên  hai  số nguyên  này,
//bao  gồm tổng(val1+val2),  hiệu(val1-val2),  tích  (val1*val2)  và  tỉsố (val1/val2)


//VINAGHOST_18CTT2_FIT_KHTN
//12 - 9 - 2018
//Please don't copy my code without permission

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 


int main()
{
	int val1, val2;
	int agree = true;

	START:printf("Nhap 2 so nguyen val1 va val2 ( khac 0) cach nhau dau khoang trang: ");
	scanf("%d %d", &val1, &val2);

	printf("\aTong %d + %d la %d\n", val1, val2, val1 + val2);
	printf("Hieu %d - %d la %d\n", val1, val2, val1 - val2);
	printf("Tich %d x %d la %d\n", val1, val2, val1 * val2);
	printf("Thuong %d : %d la %d\n", val1, val2, val1 / val2);

	printf("\nKet thuc chuong trinh NHAP 1");
	printf("\nNHAP 0 neu muon nhap 2 so khac\n");
	scanf("%d", &agree);

	if (!agree)
	{
		system("cls");
		goto START;
	}
	return 0;
}