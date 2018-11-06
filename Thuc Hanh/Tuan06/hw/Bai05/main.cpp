#include "core.h"

int main() {

	ThongBao(5, "CONG HAI MA TRAN");

	HaiChieu a, b, c;
	printf("Nhap mang A: \n");
	NhapMang(a);
	printf("Nhap mang B: \n");
	NhapMang(b);

	if (MaTranHopLe(a.n, a.length, b.n, b.length))
	{
		CongMaTran(a.arr, b.arr, a.n, a.length, c.arr, c.n, c.length);
		XuatMang(c.arr, c.n, c.length);
	}
	else
	{
		printf("Kich thuoc hai ma tran khac nhau khong the cong");
	}

	DungManHinh("KET THUC");
	return 0;
}