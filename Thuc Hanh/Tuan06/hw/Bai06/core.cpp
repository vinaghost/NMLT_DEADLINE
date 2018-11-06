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

void NhapMang(BaChieu &input, int Sign)
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
	printf("Nhap do cao: ");
	scanf("%d", &input.height);
	while (input.height < 0 || input.height > MAX_ARRAY)
	{
		printf("Nhap lai do cao (lon hon 0 va nho hon %d): ", MAX_ARRAY);
		scanf("%d", &input.height);
	}
	for (int i = 0; i < input.height; i++)
	{
		for (int j = 0; j < input.length; j++)
		{
			for (int k = 0; k < input.length; k++)
			{
				printf("Nhap phan tu thu [%d,%d,%d]: ", i + 1, j + 1, k + 1);
				scanf("%d", &input.arr[i].array[j][k]);

				while ((input.arr[i].array[j][k] < 0 && Sign == 1) || (input.arr[i].array[j][k] > 0 && Sign == -1))
				{
					printf("Nhap lai phan tu thu %d (%s): ", i + 1, Sign > 0 ? "so duong" : "so am");
					scanf("%d", &input.arr[i].array[j][k]);
				}
			}

		}
	}
}

void TimKiemPhanTuTrongMang(BaChieu input, int x)
{
	for (int i = 0; i < input.height; i++)
	{
		for (int j = 0; j < input.length; j++)
		{
			for (int k = 0; k < input.length; k++)
			{
				if (x == input.arr[i].array[j][k])
					printf("Vi tri: %d %d %d\n", i, j, k);
			}
		}
	}

}