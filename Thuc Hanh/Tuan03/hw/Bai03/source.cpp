#include "function.h"
void ThongBao()
{
	Enter;
	TieuDe;
	Enter;
}
void Wait()
{
	Enter;
	printf("Nhan Enter de ket thuc chuong trinh");
	getchar();
	getchar();
}
void YeuCau()
{
	ThongBao();
	printf("Nhap nam duong lich can chuyen: ");
}
int NhapNam()
{
	int n;
	scanf("%d", &n);
	return n;
}
void XuatNam(int n)
{
	system("cls");
	ThongBao();
	printf("Nam %d la nam %s %s\n", n, Can[(n - 4) % SoCan], Chi[(n - 4) % SoChi]);
}