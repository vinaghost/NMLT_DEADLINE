//Câu  1.Người  dùng  nhập  vào  một  số không  âm  
//biểu  diễn  độdài  theo  hệ dặm.
//Viết  chương  trình  chuyển sốnày  sang  giá  trị tương  ứng  ở hệ kilômét.
//  Biết  rằng  1  dặm =  1.609  kilômét.


//VINAGHOST_18CTT2_FIT_KHTN
//12 - 9 - 2018
//Please don't copy my code without permission

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 

#define DAM 1.609

int main()
{
	float s;
	int agree;

	START:printf("Nhap so dam: ");
	scanf("%f", &s);

	printf("\a%f dam = %f kilomet", s, s * DAM);

	printf("\nKet thuc chuong trinh NHAP 1");
	printf("\nNHAP 0 neu muon doi so dam khac\n");
	scanf("%d", &agree);

	if (!agree)
	{
		system("cls");
		goto START;
	}
	return 0;
}

