#include "function.h"

void ThongBao()
{
	system("cls");
	Enter;
	TieuDe;
	Enter;
}

void MenuMain()
{
	ThongBao();
	printf("1. Nhap mang\n");
	printf("2. In mang\n");
	printf("3. Tim max trong mang\n");
	printf("4. Tim min trong mang\n");
	printf("5. Tim so nguyen to trong mang\n");
	printf("6. Tim so trong mang\n"); //so lan xuat hien
	printf("7. Thoat\n");
	Enter;
	printf("Chon chi so o dau dong.\n");
	printf("Chon: ");

	MenuSelectMain();
}
void MenuError(int Item)
{
	ThongBao();
	printf("Chi co the chon tu 1 den %d\n", Item);
	Enter;

	printf("1. Quay lai menu chinh\n");
	printf("2. Thoat\n");
	Enter;
	printf("Chon chi so o dau dong.\n");
	printf("Chon: ");
	MenuSelectSub();
}
void MenuError2()
{
	ThongBao();
	printf("Chua nhap mang\n");
	Enter;
	printf("1. Quay lai menu chinh\n");
	printf("2. Thoat\n");
	Enter;
	printf("Chon chi so o dau dong.\n");
	printf("Chon: ");
	MenuSelectSub();
}

void MenuDone()
{
	Enter;
	Enter;
	printf("1. Quay lai menu chinh\n");
	printf("2. Thoat\n");
	Enter;
	printf("Chon chi so o dau dong.\n");
	printf("Chon: ");
	MenuSelectSub();
}

int Mang[MAX_ARRAY];
int Size;
int Did = 0;

void MenuSelectMain()
{
	int Item;
	scanf("%d", &Item);
	ThongBao();
	switch (Item)
	{
	case 1:
	{
		Size = NhapMang(Mang);
		Did = 1;
		MenuDone();
		break;
	}
	case 2:
	{
		if (Did)
		{
			XuatMang(Mang, Size);
			MenuDone();
		}
		else
			MenuError2();
		break;
	}
	case 3:
	{
		if (Did)
		{
			printf("So lon nhat trong mang la %d", TimMax(Mang, Size));
			MenuDone();
		}
		else
			MenuError2();

		break;
	}
	case 4:
	{
		if (Did)
		{

			printf("So nho nhat trong mang la %d", TimMin(Mang, Size));
			MenuDone();
		}
		else
			MenuError2();
		break;

	}
	case 5:
	{
		if (Did)
		{
			TimNguyenTo(Mang, Size);
			MenuDone();
		}
		else
			MenuError2();

		break;
	}
	case 6:
	{
		if (Did)
		{
			printf("Nhap so can tim: ");
			int BiTim;
			scanf("%d", &BiTim);
			int SoLan = TimKiem(BiTim, Mang, Size);
			if (SoLan)
				printf("So %d xuat hien %d lan trong mang", BiTim, SoLan);
			else
				printf("So %d khong ton tai trong mang", BiTim);
			MenuDone();
		}
		else
			MenuError2();

		break;
	}
	case 7:
	{
		break;
	}
	default:
		MenuError(7);
	}
}
void MenuSelectSub()
{
	int Item;
	scanf("%d", &Item);
	switch (Item)
	{
	case 1:
	{
		MenuMain();
		break;
	}
	case 2:
	{
		break;
	}
	default:
		MenuError(2);
	}

}

int NhapMang(int a[])
{
	printf("Nhap so luong phan tu cua mang: ");
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap phan tu thu %d: ", i + 1);
		scanf("%d", &a[i]);
	}
	return n;
}
void XuatMang(int a[], int n)
{
	printf("Cac phan tu cua mang la: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

int SoNguyenTo(int n)
{
	if (n < 2) return 0;

	if (!(n % 2)) return 0;

	for (int i = 3; i < n; i += 2)
	{
		if (!(n % i))
			return 0;
	}

	return 1;
}
void TimNguyenTo(int a[], int n)
{
	printf("Cac so nguyen to co trong mang la: ");
	for (int i = 0; i < n; i++)
	{
		if (SoNguyenTo(a[i]))
		{
			printf("%d", a[i]);
		}
	}
}
int TimMax(int a[], int n)
{
	int max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}

	return max;
}
int TimMin(int a[], int n)
{
	int min = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}

	return min;
}
int TimKiem(int BiTim, int a[], int n)
{
	int Times = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == BiTim)
		{
			Times++;
		}
	}

	return Times;
}