#include "menu.h"

void MenuMain()
{
	ThongBao(0, "CHON CAC MUC DUOI DAY DE TIEP TUC CHUONG TRINH");

	printf("1. Rut gon phan so\n");
	printf("2. So sanh phan so\n");
	printf("3. Tinh toan phan so\n");
	printf("4. Kiem tra su ton tai cua phan so o trong mot day phan so\n");
	printf("5. Tinh tong mot day phan so\n");
	printf("6. Sap xep mot day phan so tang dan\n");
	printf("7. Tinh khoang cach giua 2 diem trong khong gian 2 chieu\n");
	printf("8. Tinh chu vi va dien tich cua 1 tam giac trong khong gian 2 chieu\n");
	printf("9. Tim top m trong danh sach sinh vien cho truoc\n");
	printf("10. Dung chuong trinh\n");

	printf("Chon: ");
	MenuSelectMain();
}

void MenuError(const char error[])
{
	ThongBao(0, "CHUONG TRINH XAY RA LOI");
	printf("%s\n", error);
	MenuDone();
}

void MenuDone()
{
	printf("\n\n");
	printf("1. Quay lai.\n");
	printf("2. Dung chuong trinh\n");
	MenuSelectDone();
}

void MenuSelectMain()
{
	int item;
	scanf("%d", &item);
	switch (item)
	{
		case 1: {
			Bai01();
			break;
		}
		case 2: {
			Bai02();
			break;
		}
		case 3: {
			Bai03();
			break;
		}
		case 4: {
			Bai04();
			break;
		}
		case 5: {
			Bai05();
			break;
		}
		case 6: {
			Bai06();
			break;
		}
		case 7: {
			Bai07();
			break;
		}
		case 8: {
			Bai08();
			break;
		}
		case 9: {
			Bai10();
			break;
		}
		case 10: {
			break;
		}
		default:
			MenuError("Chi co the nhan tu 1 den 9");
	}
}

void MenuSelectDone()
{
	int item;
	scanf("%d", &item);

	switch (item)
	{
		case 1: {
			MenuMain();
			break;
		}
		case 2: {
			break;
		}
		default:
			MenuError("Chi nhan 1 va 2.");
	}
}
void Bai01()
{
	PHANSO a;
	ThongBao(1, "RUT GON PHAN SO");

	NhapPhanSo(a);

	ThongBao(1, "RUT GON PHAN SO");

	printf("Phan so ");
	XuatPhanSo(a);
	printf(" duoc rut gon thanh ");

	RutGonPhanSo(a);

	XuatPhanSo(a);

	MenuDone();
}
void Bai02()
{
	PHANSO a, b;
	ThongBao(2, "SO SANH 2 PHAN SO");

	NhapPhanSo(a, 1);
	NhapPhanSo(b, 2);

	ThongBao(2, "SO SANH 2 PHAN SO");

	printf("Phan so ");
	XuatPhanSo(a);
	switch (SoSanhPhanSo(a, b))
	{
	case 1:
	{
		printf(" LON HON ");
		break;
	}
	case -1:
	{
		printf(" NHO HON ");
		break;
	}
	case 0:
	{
		printf(" BANG ");
		break;
	}
	}
	printf("phan so ");
	XuatPhanSo(b);

	MenuDone();
}
void Bai03() {
	ThongBao(3, "TINH TOAN DON GIAN GIUA 2 PHAN SO");
	PHANSO a, b;
	NhapPhanSo(a, 1);
	NhapPhanSo(b, 2);

	ThongBao(3, "TINH TOAN DON GIAN GIUA 2 PHAN SO");
	printf("Phan so thu nhat la: ");
	XuatPhanSo(a);
	printf("\nPhan so thu hai la: ");
	XuatPhanSo(b);
	printf("\n\nTong 2 phan so la: ");
	XuatPhanSo(CongPhanSo(a, b), 1);

	printf("\nHieu 2 phan so la: ");
	XuatPhanSo(TruPhanSo(a, b), 1);

	printf("\nTich 2 phan so la: ");
	XuatPhanSo(NhanPhanSo(a, b), 1);

	printf("\nThuong 2 phan so la: ");
	XuatPhanSo(ChiaPhanSo(a, b), 1);

	MenuDone();
}
void Bai04() {
	ThongBao(4, "TIM PHAN SO TRONG MANG CHO TRUOC");
	DAYPHANSO aP;
	NhapDayPhanSo(aP);
	printf("\n");
	PHANSO q;
	NhapPhanSo(q);

	ThongBao(4, "TIM PHAN SO TRONG MANG CHO TRUOC");
	printf("Phan so ");
	XuatPhanSo(q);
	int KetQua = TimKiemPhanSo(aP, q);
	if (KetQua) printf(" XUAT HIEN ");
	else printf(" KHONG XUAT HIEN ");
	printf("trong mang phan so: ");
	XuatDayPhanSo(aP);

	MenuDone();
}
void Bai05() {
	ThongBao(5, "TINH TONG MOT MANG PHAN SO CHO TRUOC");
	DAYPHANSO aP;
	NhapDayPhanSo(aP);

	ThongBao(5, "TINH TONG MOT MANG PHAN SO CHO TRUOC");
	PHANSO s = TongMangPhanSo(aP);
	printf("Mang phan so: ");
	XuatDayPhanSo(aP);
	printf(" co tong la ");
	XuatPhanSo(s, 1);

	MenuDone();
}
void Bai06() {
	ThongBao(6, "SAP XEP MANG PHAN SO CHO TRUOC");
	DAYPHANSO aP;
	NhapDayPhanSo(aP);

	ThongBao(6, "SAP XEP MANG PHAN SO CHO TRUOC");
	printf("Day phan so: ");
	XuatDayPhanSo(aP);

	SapXepDayPhanSo(aP);

	printf("\nsau khi sap xep la: ");
	XuatDayPhanSo(aP);

	MenuDone();
}
void Bai07() {
	ThongBao(7, "TINH KHOANG CACH GIUA 2 DIEM TRONG KHONG GIAN 2 CHIEU");
	Diem2D a, b;
	NhapDiem2D(a, 'A');
	NhapDiem2D(b, 'B');

	ThongBao(7, "TINH KHOANG CACH GIUA 2 DIEM TRONG KHONG GIAN 2 CHIEU");
	printf("Khoang cach giua 2 diem ");
	XuatDiem2D(a, 'A');
	printf(" va ");
	XuatDiem2D(b, 'B');
	printf(" la %lg", KhoangCach(a, b));

	MenuDone();
}
void Bai08() {
	ThongBao(8, "TINH CHU VI VA DIEN TICH TAM GIAC TRONG KHONG GIAN 2 CHIEU");
	Diem2D a, b, c;
	NhapDiem2D(a, 'A');
	NhapDiem2D(b, 'B');
	NhapDiem2D(c, 'C');

	ThongBao(8, "TINH CHU VI VA DIEN TICH TAM GIACTRONG KHONG GIAN 2 CHIEU");
	if (TamGiacHopLe(a, b, c))
	{
		printf("Chu vi tam giac ABC la %lg\n", ChuViTamGiac(a, b, c));
		printf("Dien tich tam giac ABC la %lg", DienTichTamGiac(a, b, c));
		MenuDone();
	}
	else
	{
		MenuError("Tam giac khong hop le, khong the tinh chu vi va dien tich");
	}

	
}
void Bai10() {
	ThongBao(10, "TIM TOP SINH VIEN");

	DSSV CQ2018;
	NhapDSSinhVien(CQ2018);

	int m;
	printf("Ban muon tim top may ? ");
	scanf("%d", &m);

	ThongBao(10, "TIM TOP SINH VIEN");
	SapXepDSSinhVien(CQ2018);

	XuatDSSinhVien(CQ2018, m);

	MenuDone();
}