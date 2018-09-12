//Hiệu  chỉnh  chương  trình  trong  Câu  4 bằng  cách  yêu  cầu  người  dùng  nhập  các số thực
//và  lưu  chúng  vào biến  kiểu  double.
//So  sánh  kết  quảcủa  chương  trình  trong Câu  3  và  trong  Câu  4  
//trên  một  vài  bộ giá  trị đầu  vào. 
// Hãy  chú  thích  vào  cuối  chương  trình  những  tường  hợp  cho  kết  quảkhác  nhau  (nếu  có)


//VINAGHOST_18CTT2_FIT_KHTN
//12 - 9 - 2018
//Please don't copy my code without permission

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 

int main()
{
	double val1, val2;
	int agree;

	START:printf("Nhap 2 so thuc val1 va val2 ( khac 0) cach nhau dau khoang trang: ");
	scanf("%lf %lf", &val1, &val2);

	printf("\aTong %lf + %lf la %lf\n", val1, val2, val1 + val2);
	printf("Hieu %lf - %lf la %lf\n", val1, val2, val1 - val2);
	printf("Tich %lf x %lf la %lf\n", val1, val2, val1 * val2);
	printf("Thuong %lf : %lf la %lf\n", val1, val2, val1 / val2);

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
// Exercise 04:
// 5 / 3 = 1
// 3 / 5 = 0

// Exercise 05:
// 5.0 / 3.0 = 1.66667
// 3.0 / 5.0 = 0.60000