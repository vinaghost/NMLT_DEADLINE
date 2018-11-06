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
		printf("Nhap lai so dong (lon hon 0 va nho hon %d): ", MAX_ARRAY);
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
				scanf("%d", &input.arr[i]);
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

int TimPhanTuYenNgua(int arr[][MAX_ARRAY], int n, int length, int SeekerArr[][2])
{
	int count = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < length; j++)
		{
			if (MinInRow(arr, length, arr[i][j], i) && MaxInColumn(arr, n, arr[i][j], j))
			{
				SeekerArr[count][0] = i;
				SeekerArr[count][1] = j;
				
				count++;
			}
		}	
	}

	return count;
}

void XuatPhanTuYenNgua(int arr[][MAX_ARRAY], int SeekerArr[][2], int count)
{
	if (count) {
		printf("Cac phan tu yen ngua co trong mang:\n");
		for (int i = 0; i < count; i++)
		{
			printf("] %d o vi tri [%d,%d]\n", arr[SeekerArr[i][0]][SeekerArr[i][1]], SeekerArr[i][0], SeekerArr[i][1]);
		}
	}
	else printf("Khong tim thay phan tu yen ngua trong mang");
}
int MinInRow(int arr[][MAX_ARRAY], int length, int x, int Row)
{
	for (int i = 0; i < length; i++)
	{
		if (x > arr[Row][i]) return 0;
	}
	return 1;
}
int MaxInColumn(int arr[][MAX_ARRAY], int n, int x, int Column)
{
	for (int i = 0; i < n; i++)
	{
		if (x < arr[i][Column]) return 0;
	}
	return 1;
}