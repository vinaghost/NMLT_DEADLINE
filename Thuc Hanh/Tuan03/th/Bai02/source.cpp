#include "function.h"

//MENU
void Menu(int sub, int &height, int item = 3, int cls = 1)
{
	if(cls)
		system("cls");
	switch (sub)
	{
	case 0:	MenuMain(height); break;
	case 1:	MenuSub1(height); break;
	case 2: MenuSub2(height); break;
	case 3: MenuSub3(height, item); break;
	case 4: MenuSub4(height); break;
	case 5: MenuSub5(height); break;
	}
}
void MenuMain(int &height)
{
	enter;
	TieuDe;
	enter;
	printf("1. Chieu cao tam giac: ");
	if (height) printf("%d", height);
	else		printf("Chua nhap");
	enter;
	printf("2. Chon tam giac muon ve\n");
	printf("3. Thoat\n");
	printf("Chon chuc nang bang cach lua chon chi so o dau moi lua chon\n");
	MenuSelect(0, height);
}
void MenuSub1(int &height) 
{
	enter;
	TieuDe;
	enter;
	printf("Ban da nhap chieu cao la %d", height);
	enter;

	printf("1. Nhap lai\n");
	printf("2. Chon tam giac\n");
	printf("3. Thoat\n");

	printf("Chon chuc nang bang cach lua chon chi so o dau moi lua chon\n");
	MenuSelect(1, height);
}
void MenuSub2(int &height)
{
	enter;
	TieuDe;
	enter;

	printf("1. Tam giac vuong co goc vuong o goc trai duoi\n");
	printf("2. Tam giac vuong co goc vuong o goc phai duoi\n");
	printf("3. Tam giac vuong co goc vuong o goc trai tren\n");
	printf("4. Tam giac vuong co goc vuong o goc phai tren\n");
	printf("5. Tam giac can co dinh o tren\n");
	printf("6. Tam giac can co dinh o duoi\n");

	printf("7. Quay ve man hinh chinh\n");
	printf("8. Thoat\n");
	MenuSelect(2, height);
}
void MenuSub3(int &height, int item)
{
	enter;
	TieuDe;
	enter;

	printf("CHI CO THE NHAP TU 1 DEN %d\n", item);
	enter;
	printf("1. Quay ve man hinh chinh\n");
	printf("2. Thoat\n");
	MenuSelect(3, height);
}
void MenuSub4(int &height)
{
	enter;
	enter;
	printf("1. Quay ve man hinh chinh\n");
	printf("2. Thoat\n");
	MenuSelect(3, height);

}
void MenuSub5(int &height)
{
	enter;
	TieuDe;
	enter;
	printf("Ban chua nhap chieu cao\n");
	enter;
	printf("1. Quay ve man hinh chinh\n");
	printf("2. Thoat\n");
	MenuSelect(3, height);

}
//SELECT
void MenuSelect(int sub, int &height)
{
	int menu_id;
	scanf("%d", &menu_id);
	system("cls");
	switch (sub)
	{
	case 0: MenuSelectMain(menu_id, height); break;
	case 1: MenuSelectSub1(menu_id, height); break;
	case 2: MenuSelectSub2(menu_id, height); break;
	case 3: MenuSelectSub3(menu_id, height); break;
	}
}
void MenuSelectMain(int menu_id, int &height)
{
	switch (menu_id)
	{
		case 1:
		{
			system("cls");
			printf("Nhap chieu cao cua tam giac: ");
			scanf("%d", &height);
			Menu(1, height);
			break;
		}
		case 2:
		{
			if (height)
			{
				Menu(2, height);
			}
			else
			{
				Menu(5, height);
			}
				break;
		}
		case 3:
		{
			break;
		}
		default:
		{
			Menu(3, height);
		}
	}

}
void MenuSelectSub1(int menu_id, int &height)
{
	switch (menu_id)
	{
		case 1:
		{
			system("cls");
			printf("Nhap chieu cao cua tam giac: ");
			scanf("%d", &height);
			Menu(1, height);
			break;
		}
		case 2:
		{
			Menu(2, height);
			break;
		}
		case 3:
		{
			break;
		}
		default:
		{
			Menu(3, height);
		}
	}

}
void MenuSelectSub2(int menu_id, int &height)
{
	if (menu_id > 0 && menu_id < 7)
	{
		ChonTamGiac(menu_id, height);
	}
	else if (menu_id == 7)
	{
		Menu(0, height);
	}
	else if (menu_id == 8)
	{
		//khong lam gi ca
	}
	else
		Menu(3, height, 8);
}
void MenuSelectSub3(int menu_id, int &height)
{
	switch (menu_id)
	{
		case 1:
		{
			Menu(0, height);
			break;
		}
		case 2:
		{
			break;
		}
		default:
		{
			Menu(3, height, 2);
		}
	}

}

//DRAW
void TamGiacVuongTraiDuoi(int height)
{
	for (int i = 1; i <= height; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
			if (i == j)
				enter;
		}
	}
}
void TamGiacVuongPhaiDuoi(int height)
{
	for (int i = 1; i <= height; i++)
	{
		int j;
		for (j = 1; j <= height - i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		enter;
	}
}
void TamGiacVuongTraiTren(int height)
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 1; j <= height - i; j++)
		{
			printf("*");
		}
		enter;
	}
}
void TamGiacVuongPhaiTren(int height)
{
	for (int i = 0; i < height; i++)
	{
		int j;
		for (j = 1; j <= i; j++)
		{
			printf(" ");
		}
		for (int j = 1; j <= height - i; j++)
		{
			printf("*");
		}
		enter;
	}
}
void TamGiacCanTren(int height)
{
	for (int i = 0; i < height; i++)
	{
		int j;
		for (j = 0; j < height - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < (2 * i + 1); j++)
		{
			printf("*");
		}
		enter;
	}
}
void TamGiacCanDuoi(int height)
{
	for (int i = 0; i < height; i++)
	{
		int j;
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < (2 * (height - i - 1) + 1); j++)
		{
			printf("*");
		}
		enter;
	}
}

//MISC
void ChonTamGiac(int item, int &height)
{
	enter;
	TieuDe;
	enter;
	switch (item)
	{
		case 1:
		{
			TamGiacVuongTraiDuoi(height);
			break;
		}
		case 2:
		{
			TamGiacVuongPhaiDuoi(height);
			break;
		}
		case 3:
		{
			TamGiacVuongTraiTren(height);
			break;
		}
		case 4:
		{
			TamGiacVuongPhaiTren(height);
			break;
		}
		case 5:
		{
			TamGiacCanTren(height);
			break;
		}
		case 6:
		{
			TamGiacCanTren(height);
			break;
		}
	}

	Menu(4, height, 6, 0);
	
}