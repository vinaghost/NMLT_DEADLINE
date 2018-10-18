#include "function.h"

void ThongBao() {
	system("cls");
	Enter;
	TieuDe;
	Enter;
}
void MenuMain() {
	ThongBao();
	printf("1. Nhap mang\n");
	printf("2. Tim cuc tri lan can mang gia tri so nguyen to trong mang\n");
	printf("3. Sap xep cac phan tu la cuc tri da tim o tren\n");
	printf("4. Sap xep cac phan tu khong la cuc tri da tim o tren va xung quanh no\n");
	printf("5. Thoat\n");
	Enter;
	printf("Chon chi so o dau dong.\n");
	printf("Chon: ");

	MenuSelectMain();
}
void MenuError(const char str[]) {
	ThongBao();
	printf("%s\n", str);
	Enter;

	printf("1. Quay lai menu chinh\n");
	printf("2. Thoat\n");
	Enter;
	printf("Chon chi so o dau dong.\n");
	printf("Chon: ");
	MenuSelectSub();
}
void MenuDone() {
	Enter;
	Enter;
	printf("1. Quay lai menu chinh\n");
	printf("2. Thoat\n");
	Enter;
	printf("Chon chi so o dau dong.\n");
	printf("Chon: ");
	MenuSelectSub();
}
void MenuSort(SortWhat What) {
	Enter;
	Enter;
	printf("0. Sap xep tu nho toi lon\n");
	printf("1. Sap xep tu lon toi nho\n");
	Enter;
	printf("Chon chi so o dau dong.\n");
	printf("Chon: ");
	MenuSelectSort(What);
}

int Mang[MAX_ARRAY];
int Size;

void MenuSelectMain() {
	int Item;
	scanf("%d", &Item);
	ThongBao();
	switch (Item)
	{
	case 1:
	{
		Size = NhapMang(Mang);
		MenuDone();
		break;
	}

	case 2:
	{
		if (ArrayExist(Mang, Size))
		{
			TimCucTriLanCanNguyenTo(Mang, Size);
			MenuDone();
		}
		else
			MenuError("Mang chua duoc nhap");

		break;
	}
	case 3:
    {
        if (ArrayExist(Mang, Size))
		{
			MenuSort(CUCTRI);
		}
		else
			MenuError("Mang chua duoc nhap");

		break;
    }
	case 4:
	{
		if (ArrayExist(Mang, Size))
		{
			MenuSort(NON_CUCTRI);
		}
		else
			MenuError("Mang chua duoc nhap");
		break;
	}
	case 5:
	{
		break;
	}
	default:
		MenuError("Chi co the chon tu 1 den 5! Khong duoc chon khac.");
	}
}
void MenuSelectSub() {
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
		MenuError("Chi co the chon 1 hoac 2! Khong duoc chon khac.");
	}

}
void MenuSelectSort(SortWhat What) {
	int Type;
	scanf("%d", &Type);
	if (Type == TANG || Type == GIAM)
	{
		Sort(Mang, Size, What, Type);
	}
	else
		MenuError("Chi co the chon 0 hoac 1! Khong duoc chon khac.");
}
int NhapMang(int a[]) {
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
void XuatMang(int a[], int n, const char info[]) {

	printf(info);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}
int ArrayExist(int a[], int n) {
    if( n > 0 ) return 1;
    return 0;
}
void Sort(int a[], int n, SortWhat What, int Type) {
	for (int i = 0; i < n - 1; i++)
	{
		//CUCTRI = chi xep cuc tri                        //NON CUC TRI chi xep cac phan tu khong phai cuc tri hoac xung quanh cuc tri
		if ( (What == CUCTRI && CucTriLanCan(a, n, i)) || (What == NON_CUCTRI && !( CucTriLanCan(a, n, i) || CucTriLanCan(a, n, i+1) || CucTriLanCan(a, n, i-1))))
		{
			for (int j = 0; j < n; j++)
			{
				//lon toi nho type = 1      //nho toi lon type = 0
				if ((Type && a[i] < a[j]) || (!Type && a[i] > a[j]))
				{
					HoanVi(a[i], a[j]);
				}
			}
		}
	}
	Enter;
	XuatMang(a, n, "Mang da duoc sap xep la: ");

	MenuDone();
}
void HoanVi(int &a, int &b) {
	a = a + b;
	b = a - b;
	a = a - b;
}
void TimCucTriLanCanNguyenTo(int a[], int n) {
	ThongBao();
	Enter;
	printf("Cac cuc tri lan can co trong mang la: \n");
	for (int i = 0; i < n; i++)
	{
		if (CucTriLanCan(a, n, i) && SoNguyenTo(a[i])) printf("Phan tu thu %d: %d\n", i, a[i]);
	}
}
int SoNguyenTo(int n) {
	if (n == 1 || n == -1 || n == 0) return 0;
	if (n == 2 || n == -2) return 1;
	if ((n & 1) == 0) return 0;
	for (int i = 3; i < n; i++)
	{
		if (n % i == 0) return 0;
	}
	return 1;
}
int CucTriLanCan(int a[], int n, int CucTri) {
	if (CucTri <= 0) return 0;
	if (CucTri >= n - 1) return 0;

	if (a[CucTri] > a[CucTri - 1] && a[CucTri] > a[CucTri + 1]) return 1;
	if (a[CucTri] < a[CucTri - 1] && a[CucTri] < a[CucTri + 1]) return 1;

	return 0;
}
