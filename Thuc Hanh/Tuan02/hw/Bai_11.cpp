#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main()
{
	char name[30];
	float DiemLy, DiemHoa, DiemToan;
	float DiemTbm;
	printf("Nhap vao ten hoc sinh: ");
	scanf("%[^\n]%*c", &name);

	printf("Nhap vao diem toan, ly va hoa cua hoc sinh cach nhau dau khoang trang: ");
	scanf("%f %f %f", &DiemToan, &DiemLy, &DiemHoa);

	DiemTbm = (DiemLy + DiemHoa + DiemToan) / 3;
	printf("Ten: %s\n", name);
	printf("Diem trung binh cua hoc sinh la: %.2f\n", DiemTbm);
	printf("Danh gia: ");
	if (DiemTbm >= 9.0)
		printf("suat xac");
	else if (DiemTbm >= 8.0)
		printf("gioi");
	else if (DiemTbm >= 6.5)
		printf("kha");
	else if (DiemTbm >= 5.0)
		printf("trung binh");
	else if (DiemTbm >= 3.0)
		printf("yeu");
	else
		printf("kem");


	printf("\n\nCHUONG TRINH KET THUC");
	_getch();
	return 0;
}
