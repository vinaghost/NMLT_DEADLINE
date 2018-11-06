#include "core.h"

int main()
{
	ThongBao("4", "TIM PHAN TU TRUNG NHAU GIUA 2 MANG");

	HaiChieu a, b;
	printf("Nhap mang dau tien: \n");
	NhapMang(a);

	printf("Nhap mang thu hai: \n");
	NhapMang(b);

	printf("Mang ban vua nhap: \n");
	printf("] Mang thu 1\n");
	XuatMang(a.arr, a.n, a.length);
	printf("] Mang thu 2\n");
	XuatMang(b.arr, b.n, b.length);

	List Trung;
	Trung.count = TimPhanTuTrungNhauOHaiMang(a.arr, a.n, a.length, b.arr, b.n, b.length, Trung.arr);
	XuatPhanTuTrungNhau(a.arr, Trung.arr, Trung.count);

	DungManHinh("KET THUC");
	return 0;
}