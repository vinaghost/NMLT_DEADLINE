//Viết  chương  trình  chuyển  đổi  tiền  tệ của  nước  Mỹ.
//Người  dùng  nhập  số lượng  pennies  (1-cent  coins),  nickels  (5-cent  coins),
//dimes  (10-cent  coins),  quarters  (25-cent  coins),  half  dollars  (50-cent  coins),
//và  onedollars(100-cent  coins). 
//Chương  trình  yêu  cầu  người  dùng  nhập  riêng  mỗi  loại  tiền.
//  Cho  biết  tổng  số tiền  mà  người  này  có  tính  theo cents


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
	int pennies, nickels, dimes, quarters, half_dollars, dollars;
	int agree;

	START:printf("So dong pennies dang co: ");
	scanf("%d", &pennies);
	printf("So dong nickels dang co: ");
	scanf("%d", &nickels);
	printf("So dong dimes dang co: ");
	scanf("%d", &dimes);
	printf("So dong quarters dang co: ");
	scanf("%d", &quarters);
	printf("So dong half dollars dang co: ");
	scanf("%d", &half_dollars);
	printf("So dong dollars dang co: ");
	scanf("%d", &dollars);

	printf("\a\n\nOh! Ban dang co %d cent", pennies*PENNY + nickels*NICKEL + dimes*DIME + quarters*QUARTER + half_dollars*HALF_DOLLAR + dollars*DOLLAR);

	printf("\n\n\nKet thuc chuong trinh NHAP 1");
	printf("\nNHAP 0 neu muon nhap lai\n");
	scanf("%d", &agree);

	if (!agree)
	{
		system("cls");
		goto START;
	}
	return 0;
}