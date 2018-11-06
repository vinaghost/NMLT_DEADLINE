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
int TimPhanTuTrungNhauOHaiMang(int arr1[][MAX_ARRAY], int n1, int length1, int arr2[][MAX_ARRAY], int n2, int length2, ToaDo TrungArr[][MAX_ARRAY])
{
	int count = 0;
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < length1; j++)
		{
			ToaDo DiaChi;
			if (XuatHienTrongMang(arr1[i][j], arr2, n2, length2, DiaChi))
			{
				TrungArr[count][0].x = i;
				TrungArr[count][0].y = j;

				TrungArr[count][1] = DiaChi;
				count++;
			}
		}
	}
	return count;
}
int XuatHienTrongMang(int x, int arr[][MAX_ARRAY], int n, int length, ToaDo &DiaChi)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < length; j++)
		{
			if (x == arr[i][j])
			{
				DiaChi.x = i;
				DiaChi.y = j;
				return 1;
			}
		}
	}
	return 0;
}
void XuatPhanTuTrungNhau(int arr[][MAX_ARRAY], ToaDo TrungArr[][MAX_ARRAY], int count)
{
	if (count) {


		printf("Phan tu trung nhau: \n");
		for (int i = 0; i < count; i++)
		{
			printf("] (%d): A[%d][%d], B[%d][%d]", arr[TrungArr[i][0].x][TrungArr[i][0].y], TrungArr[i][0].x, TrungArr[i][0].y, TrungArr[i][1].x, TrungArr[i][1].y);
		}
	}
	else printf("Khong tim thay phan tu trung nhau");
}