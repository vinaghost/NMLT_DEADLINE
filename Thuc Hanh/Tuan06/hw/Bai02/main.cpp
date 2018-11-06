#include "core.h"

int main()
{
	ThongBao("2.1", "NHAP MANG 2 CHIEU");

	HaiChieu a;
	NhapMang(a);

	printf("Mang ban vua nhap: \n");
	XuatMang(a.arr, a.n, a.length);
	DungManHinh("TIEP TUC");

	ThongBao("2.2", "SAP XEP MANG TANG DAN TU TRAI QUA PHAI, TU TREN XUONG DUOI, THEO DUONG CHEO");
	SapXepMangTangTheoCacChieu(a);
	printf("Mang ban vua sap xep: \n");
	XuatMang(a.arr, a.n, a.length);
	DungManHinh("TIEP TUC");

	ThongBao("2.3", "SAP XEP MANG TANG TREN HANG, GIAM TREN COT");
	SapXepMangTangTheoHangGiamTheoCot(a);
	printf("Mang ban vua sap xep: \n");
	XuatMang(a.arr, a.n, a.length);
	DungManHinh("TIEP TUC");

	ThongBao("2.3", "SAP XEP MANG GIAM TREN HANG, TANG TREN COT");
	SapXepMangGiamTheoHangTangTheoCot(a);
	printf("Mang ban vua sap xep: \n");
	XuatMang(a.arr, a.n, a.length);
	DungManHinh("KET THUC");

	return 0;
}