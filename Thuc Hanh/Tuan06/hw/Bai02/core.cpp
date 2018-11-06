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

void SapXepMangTangTheoCacChieu(HaiChieu &input)
{
	MotChieu tmp;
	ChuyenDoi(input.arr, input.n, input.length, tmp);
	SapXepTang(tmp);
	ChuyenDoi(tmp, input.arr, input.n, input.length);
}

void SapXepMangTangTheoHangGiamTheoCot(HaiChieu &input)
{
	MotChieu tmp;
	ChuyenDoi(input.arr, input.n, input.length, tmp);
	SapXepTang(tmp);
	ChuyenDoi(tmp, input.arr, input.n, input.length, 1);

	for (int i = 0; i < input.n; i++)
	{
		SaoChep(input.arr[i], input.length, tmp);
		SapXepTang(tmp);
		SaoChep(tmp, input.arr[i], input.length);
	}
}

void SapXepMangGiamTheoHangTangTheoCot(HaiChieu &input)
{
	MotChieu tmp;
	ChuyenDoi(input.arr, input.n, input.length, tmp);
	SapXepTang(tmp);
	ChuyenDoi(tmp, input.arr, input.n, input.length);
	for (int i = 0; i < input.n; i++)
	{
		SaoChep(input.arr[i], input.length, tmp);
		SapXepGiam(tmp);
		SaoChep(tmp, input.arr[i], input.length);
	}
}
void SapXepTang(MotChieu &input)
{
	for (int i = 0; i < input.n - 1; i++)
	{
		for (int j = i + 1; j < input.n; j++)
		{
			if (input.arr[i] > input.arr[j])
				HoanVi(input.arr[i], input.arr[j]);
		}
	}
}
void SapXepGiam(MotChieu &input)
{
	for (int i = 0; i < input.n - 1; i++)
	{
		for (int j = i + 1; j < input.n; j++)
		{
			if (input.arr[i] < input.arr[j])
				HoanVi(input.arr[i], input.arr[j]);
		}
	}
}

void ChuyenDoi(int arr[][MAX_ARRAY], int n, int length, MotChieu &output)
{
	int k = 0;
	
	for(int i = 0; i < n; i++)
	{
		for (int j = 0; j < length; j++)
		{
			output.arr[k] =  arr[i][j];
			k++;
		}
	}

	output.n = k;
}
void ChuyenDoi( MotChieu input, int arr[][MAX_ARRAY], int n, int length, int Direction)
{
	int k = 0;
	if (Direction) k = n * length - 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < length; j++)
		{
			arr[i][j] = input.arr[k];
			if (Direction) k--;
			else			k++;
		}
	}
}
void SaoChep(int arr[], int n, MotChieu &output)
{
	for (int i = 0; i < n; i++)
	{
		output.arr[i] = arr[i];
	}
	output.n = n;
}
void SaoChep( MotChieu input, int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = input.arr[i];
	}
}
void HoanVi(int &a, int &b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}