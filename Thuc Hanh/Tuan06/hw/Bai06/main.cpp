#include "core.h"

int main() {

	ThongBao("6.2", "NHAP MANG BA CHIEU");

	BaChieu a;
	NhapMang(a);

	ThongBao("6.3", "TIM PHAN TU TRONG MANG");
	printf("Nhap so can tim: ");
	int x;
	scanf("%d", &x);
	TimKiemPhanTuTrongMang(a, x);
	DungManHinh("KET THUC");
	return 0;
}