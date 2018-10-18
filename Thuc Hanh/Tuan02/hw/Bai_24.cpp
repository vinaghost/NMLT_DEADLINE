#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//f = first n = next l = left
#define M3_4_f 4400
#define M3_2_n 8300
#define M3_l 10500

int TienNuoc(int nuoc, int nguoi)
{
	if (nuoc < 1) return 0;
	

	if (nuoc > nguoi * 6) return TienNuoc(nuoc - 1, nguoi) + M3_l;
	if (nuoc > nguoi * 4) return TienNuoc(nuoc - 1, nguoi) + M3_2_n;
	return TienNuoc(nuoc - 1, nguoi) + M3_4_f;
	
}

int main()
{
	int NuocCu, NuocMoi, num;

	printf("Nhap vao so nuoc cu va so nuoc moi cach nhau dau khoang trang: ");
	scanf("%d %d", &NuocCu, &NuocMoi);
	while (NuocCu > NuocMoi)
	{
		system("cls");
		printf("So nuoc moi phai LON HON so nuoc cun");
		printf("Nhap vao so nuoc cu va so nuoc moi cach nhau dau khoang trang: ");
		scanf("%d %d", &NuocCu, &NuocMoi);
	}

	printf("Nhap vao so nguoi tieu thu (da dang ki): ");
	scanf("%d", &num);

	int NuocDaDung = NuocMoi - NuocCu;

	int Tien = TienNuoc(NuocDaDung, num);
	printf("Tien nuoc phai tra trong thang la %d", Tien);


	printf("\n\nCHUONG TRINH KET THUC");
	_getch();
	return 0;
}
