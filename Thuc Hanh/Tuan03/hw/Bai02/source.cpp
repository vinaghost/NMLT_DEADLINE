#include "function.h"

void ThongBao()
{
	Enter;
	TieuDe;
	Enter;
}
void YeuCau()
{
	ThongBao();
	printf("Nhap tu ban phim 1 so nguyen N: ");
}
void NhapSo(int &n)
{
	scanf("%d", &n);
}
void XuatSo(int n)
{
	system("cls");
	ThongBao();
	printf("So %d ban nhap doc la ", n);
	ChuyenSoThanhChu(n);
	Enter;
}
void Wait()
{
	printf("Nhan Enter de ket thuc chuong trinh");
	getchar();
	getchar();
}
void ChuyenSoThanhChu(int n)
{
	int num = SoChuSo(n);
	int CoHoi = (num == 1 ? 1 : 0);
	int ChuSo;
	int Dau = 0, Duoi = 0;
	while (num > 0)
	{
		ChuSo = n / SoThapPhan(num);
		if (ChuSo)
		{
			if (ChuSoMuoi(num))
			{
				if (ChuSo == 1)
					printf("muoi ");
			}
			else
			{
				printf("%s ", So[ChuSo]);
				printf("%s ", ViTri[num - 1]);
				if (ChuSoDacBietDau(num)) Dau = 1;
			}
		}
		else
		{
			if (ChuSoDacBietDau(num))
			{
				if (ChuSoViTri( n, num - 2) || ChuSoViTri(n, num - 1))
				{
					printf("%s ", So[ChuSo]);
					printf("%s ", ViTri[num - 1]);

					Dau = 1;
				}
			}
			else if (ChuSoDacBietDuoi(num))
			{
				if (CoHoi)
				{
					printf("%s ", So[ChuSo]);
				}
				else
				{
					if (Dau)
					{
						printf("%s ", ViTri[num - 1]);
						Dau = 0;
					}
					
				}
			}
			else
			{
				if (Dau)
				{
					printf("le ");
				}
			}
				
		}

		n %= SoThapPhan(num);
		num--;
	}
	
}
int SoChuSo(int n)
{
	int num = 0;
	do
	{
		num++;
		n /= 10;
	} while (n > 0);
	return num;
}
int SoThapPhan(int num)
{
	int i;
	int dec = 1;

	for (i = 1; i < num; i++)
	{
		dec *= 10;
	}
	return dec;
}

int ChuSoDacBietDuoi(int num)
{
	return (num == 1 || num == 4 || num == 7 || num == 10);
}
int ChuSoDacBietDau(int num)
{
	return (num == 3 || num == 6 || num == 9);
}
int ChuSoMuoi(int num)
{
	return (num == 2 || num == 5 || num == 8);
}
int ChuSoViTri(int n, int ViTri)
{
	int dec = SoThapPhan(ViTri);
	n /= dec;

	n %= 10;
	return n;
}