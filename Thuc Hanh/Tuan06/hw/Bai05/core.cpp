#include "core.h"

void ThongBao(const char *bai, const char *name)
{
	system("cls");
	printf("BAI %s: CHUONG TRINH %s \n\n", bai, name);
}

void ThongBao(const int bai, const char *name)
{
	system("cls");
	if (bai)
		printf("BAI %d: CHUONG TRINH %s \n\n", bai, name);
	else
		printf("CHUONG TRINH %s\n\n", name);
}

void DungManHinh(const char *info)
{
	printf("\n\nNHAN ENTER DE %s CHUONG TRINH", info);
	getchar();
	getchar();
}

void NhapMang(HaiChieu &input, int Sign)
{
	printf("Nhap so dong: ");
	scanf("%d", &input.n);
	while (input.n < 0 || input.n > MAX_ARRAY)
	{
		printf("Nhap lai so d	ong (lon hon 0 va nho hon %d): ", MAX_ARRAY);
		scanf("%d", &input.n);
	}
	printf("Nhap so cot: ");
	scanf("%d", &input.length);
	while (input.length < 0 || input.length > MAX_ARRAY)
	{
		printf("Nhap lai so cot (lon hon 0 va nho hon %d): ", MAX_ARRAY);
		scanf("%d", &input.length);
	}

	for (int i = 0; i < input.n; i++)
	{
		for (int j = 0; j < input.length; j++)
		{
			printf("Nhap phan tu thu [%d,%d]: ", i + 1, j + 1);
			scanf("%d", &input.arr[i][j]);

			while ((input.arr[i][j] < 0 && Sign == 1) || (input.arr[i][j] > 0 && Sign == -1))
			{
				printf("Nhap lai phan tu thu %d (%s): ", i + 1, Sign > 0 ? "so duong" : "so am");
				scanf("%d", &input.arr[i][j]);
			}
		}

	}
}
// không thể cho struct có mảng 2 chiều vào hàm
void XuatMang(int arr[][MAX_ARRAY], int n, int length, int Sign)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < length; j++)
		{
			if ((Sign == 1 && arr[i][j] < 0) || (Sign == -1 && arr[i][j] > 0)) printf("_ ");
			else printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

int MaTranHopLe(int aN, int aLength, int bN, int bLength)
{
	return (aN == bN && aLength == bLength);
}
void CongMaTran(int a[][MAX_ARRAY], int b[][MAX_ARRAY], int n, int length, int result[][MAX_ARRAY], int &resultN, int &resultLength)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < length; j++)
		{
			result[i][j] = a[i][j] + b[i][j];
		}
	}

	resultN = n;
	resultLength = length;
}