//Viết  chương  trình  chuyển  đổi  tiền  tệcủa  nước  Mỹ 
//nhưng  trình  tự ngược  với  Câu  6. Người  dùng  nhập  tổng  số tiền  người  này  có  tính  theo  cents.
//Chương  trình  quy  đổi  ra  sốlượng  pennies,  nickels,  dimes,  
//quarters,  half  dollars  (50-cent  coins),  và  one dollars tương  ứng,
//biết  rằng  đồng  có  mệnh  giá  lớn  trước  được  quy  đổi  trước  rồi  mới  đến 
//các  đồng  có  mệnh  giá  nhỏ hơn


//VINAGHOST_18CTT2_FIT_KHTN
//12 - 9 - 2018
//Please don't copy my code without permission

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 

#define PENNY 1
#define NICKEL 5
#define DIME 10
#define QUARTER 25
#define HALF_DOLLAR 50
#define DOLLAR 100


int main()
{
	int tien;
	int agree;

	START:printf("So tien dang co la: ");
	scanf("%d", &tien);

	printf("\n\n\aOh!\n");
	printf("Ban co %d  dollars\n", tien / DOLLAR);
	tien %= DOLLAR;
	printf("Ban co %d half dollars\n", tien / HALF_DOLLAR);
	tien %= HALF_DOLLAR;
	printf("Ban co %d quarters\n", tien / QUARTER);
	tien %= QUARTER;
	printf("Ban co %d dimes\n", tien / DIME);
	tien %= DIME;
	printf("Ban co %d nickels\n", tien / NICKEL);
	tien %= NICKEL;
	printf("Ban co %d pennies", tien/PENNY);
	tien %= PENNY;
	
	printf("\n\n\nKet thuc chuong trinh NHAP 1");
	printf("\nNHAP 0 neu muon phan tich so tien khac\n");
	scanf("%d", &agree);

	if (!agree)
	{
		system("cls");
		goto START;
	}
	return 0;
}