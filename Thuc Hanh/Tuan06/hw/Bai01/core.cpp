#include "core.h"

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


void HoanVi(int &a, int &b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}


void NhapMang(MotChieu &input, int Sign)
{
	printf("Nhap so luong phan tu: ");
	scanf("%d", &input.n);
	while (input.n < 0 || input.n > MAX_ARRAY / 2 - 1)
	{
		printf("Nhap lai so luong phan tu (lon hon 0 va nho hon %d): ", MAX_ARRAY / 2 - 1);
		scanf("%d", &input.n);
	}
	for (int i = 0; i < input.n; i++)
	{
		printf("Nhap phan tu thu %d: ", i + 1);
		scanf("%d", &input.arr[i]);

		while ((input.arr[i] < 0 && Sign == 1) || (input.arr[i] > 0 && Sign == -1))
		{
			printf("Nhap lai phan tu thu %d (%s): ", i + 1, Sign > 0 ? "so duong" : "so am");
			scanf("%d", &input.arr[i]);
		}
	}
}

void XuatMang(MotChieu output, int Sign)
{
	printf("== ");
	for (int i = 0; i < output.n; i++)
	{
		if ((Sign == 1 && output.arr[i] < 0) || (Sign == -1 && output.arr[i] > 0)) printf("_ ");
		else printf("%d ", output.arr[i]);
	}
	printf("==");
}
void SapXepDoiXung(MotChieu &input)
{
	DoiXungHoaMang(input);
	DonMangDoiXung(input);

	//dồn phần tử ở giữa, 
	// vd 3 1 _ 3 thành 3 1 3
	if (input.arr[input.n / 2 - 1] * input.arr[input.n / 2] < 0)
	{
		input.arr[input.n / 2] = -1;
		DonMangDoiXung(input);
	}
}

void DoiXungHoaMang(MotChieu &input)
{
	for (int i = 0; i < input.n; i++)
	{
		if (input.arr[i] > 0)
		{
			int found = 0;

			for (int j = i + 1; j < input.n; j++)
			{
				if (input.arr[i] == input.arr[j])
				{
					input.arr[2 * input.n - i - 1] = input.arr[j];

					//đánh dấu vị trí số đã bị đưa đến vị trí khác
					input.arr[j] = -1;

					//đánh dấu vị trí không thể tạo số 
					input.arr[2 * input.n - j - 1] = -1;


					found = 1;
					break;
				}
			}

			//đánh dấu vị trí số không có số giống với nó
			if (!found) input.arr[2 * input.n - i - 1] = input.arr[i] * -2;
			// cách để không thể tồn tại số -1 trong mảng dùng đánh dấu vị trí trống để dồn mảng
		}
	}



	input.n *= 2; //update kích thước mảng

}

void DonMangDoiXung(MotChieu &input) //Dồn mảng 
{
	int count = 0;
	int size = 0;
	for (int i = 0; i < input.n; i++)
	{
		size++;
		if (input.arr[i] == -1) //vị trí trống
		{
			count++;
			size--;
		}
		if (count && input.arr[i] != -1)
		{
			input.arr[i - count] = input.arr[i];
		}
	}

	input.n = size; //update kích thước mảng
}