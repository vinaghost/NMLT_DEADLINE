#include "core.h"

int main()
{
	ThongBao(3, "TIM PHAN TU YEN NGUA TRONG MANG 2 CHIEU");

	HaiChieu a;
	NhapMang(a);

	printf("Mang ban vua nhap: \n");
	XuatMang(a.arr, a.n, a.length);

	ToaDo Seeker;
	Seeker.count = TimPhanTuYenNgua(a.arr, a.n, a.length, Seeker.arr);

	printf("\n\n");
	XuatPhanTuYenNgua(a.arr, Seeker.arr, Seeker.count);

	DungManHinh("KET THUC");

	return 0;
}