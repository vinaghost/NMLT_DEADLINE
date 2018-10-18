#include "funtion.h"

void LoginInput(int &id, int &pass)
{
	printf("Nhap thong tin ID va PASS\n");

	printf("ID: ");
	scanf("%d", &id);
	printf("PASS: ");
	scanf("%d", &pass);
	system("cls");

}
int Login(int id, int pass)
{
	if (id && pass)
	{
		printf("DANG NHAP THANH CONG");
		return 1;
	}
	else if (!id && !pass)
	{
		printf("DANG NHAP KHONG THANH CONG");
		printf("SAI ID VA PASS");
		return 0;
	}
	else if (!id)
	{
		printf("DANG NHAP KHONG THANH CONG");
		printf("SAI ID");
		return 0;
	}
	else if (!pass)
	{
		printf("DANG NHAP KHONG THANH CONG");
		printf("SAI PASS");
		return 0;
	}
	return 0;
}
void DiemInput()
{
	int diem;

	while (true)
	{
		printf("Nhap diem cho SV ( tu 1 den 10)\n");
		printf("Diem: ");
		scanf("%d", &diem);

		system("cls");
		if (diem >= 0 && diem <= 10)
		{
			printf("NHAP THANH CONG\n");
			//return diem;
			//luu diem vao 1 noi nao day
			break;
		}
		else
		{
			printf("NHAP KHONG THANH CONG.\nDE NGHI NHAP LAI.\n");
		}
	}
}

void MenuMain(int &DangNhap)
{
	enter;
	if (DangNhap) printf("BAN DA DANG NHAP");
	else printf("BAN CHUA DANG NHAP");
	enter;
	enter;
	printf("CHON CAC LUA CHON DUOI DAY\n");
	printf("1. Dang nhap\n");
	printf("2. Nhap diem\n");
	printf("3. Thoat\n");
	printf("Chon chuc nang bang cach lua chon chi so o dau moi lua chon\n");
	MenuSelect(0, DangNhap);
}
void MenuSub(int &DangNhap) //dang nhap that bai
{
	enter;
	enter;
	printf("1. Dang nhap lai\n");
	printf("2. Quay lai man hinh chinh\n");
	printf("3. Thoat\n");

	printf("Chon chuc nang bang cach lua chon chi so o dau moi lua chon\n");
	MenuSelect(1, DangNhap);
}

void MenuSelectMain(int menu_id, int &DangNhap)
{
	switch (menu_id)
	{
		case 1:
		{
			int id, pass;
			LoginInput(id, pass);
			int ThanhCong = Login(id, pass);

			if (ThanhCong)
			{
				DangNhap = true;
			}
			else
			{
				printf("BAN DA DANG NHAP THAT BAI");
			}
			MenuSub(DangNhap);
			break;
		}
		case 2:
		{
			if (DangNhap)
			{
				DiemInput();
			}
			else
			{
				printf("BAN CHUA DANG NHAP");
			}
			MenuSub(DangNhap);
			break;
		}
		case 3:
		{
			break;
		}
		default:
		{
			enter;
			printf("DE NGHI NHAP TU 1 DEN 3.");
			MenuSub(DangNhap);
		}
	}

}
void MenuSelectSub(int menu_id, int &DangNhap)
{
	switch (menu_id)
	{
	case 1:
	{
		int id, pass;
		LoginInput(id, pass);
		int ThanhCong = Login(id, pass);

		if (ThanhCong)
		{
			DangNhap = true;
		}
		else
		{
			printf("BAN DA DANG NHAP THAT BAI");
		}
		MenuSub(DangNhap);
		break;
	}
	case 2:
	{
		MenuMain(DangNhap);
		break;
	}
	case 3:
	{
		break;
	}
	default:
	{
		enter;
		printf("DE NGHI NHAP TU 1 DEN 3.");
		MenuSub(DangNhap);
	}
	}

}

void MenuSelect(int sub, int &DangNhap)
{
	int menu_id;
	scanf("%d", &menu_id);
	system("cls");
	if (sub)
		MenuSelectSub(menu_id, DangNhap);
	else
		MenuSelectMain(menu_id, DangNhap);
}