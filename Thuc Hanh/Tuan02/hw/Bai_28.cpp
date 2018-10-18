#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

const int DanSo = 76;
const int NamKhoiDau = 1999;
int main()
{
	int n;
	float k;
	printf("Nhap vao ty le tang tu nhien va so lan dan so tang so voi nam 1999 cach nhau dau khoang trang: ");
	scanf("%f %d", &k, &n);
	float DanSoBayGio = DanSo;
	int DanSoToiDa = DanSo * (n - 1);
	int i = NamKhoiDau;
	while (DanSoBayGio <= DanSoToiDa)
	{
		DanSoBayGio += DanSoBayGio * (k / 100);
		i++;
		printf("%d\t\t%g trieu nguoi\n", i, DanSoBayGio);
		
	}

	printf("\n\nCHUONG TRINH KET THUC");
	_getch();
	return 0;
}
