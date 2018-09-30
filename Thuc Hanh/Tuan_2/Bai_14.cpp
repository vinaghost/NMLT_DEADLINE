#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

const int max_a = 300;
// comment dong duoi day de thay doi cach dung vong for de dao nguoc day so
#define CACH
void HoanVi(int &a, int &b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}
int main()
{
	int n;
	printf("Nhap vao so luong phan tu co trong day so: ");
	scanf("%d", &n);

	int a[300];
#ifdef CACH
	for (int i = 0; i < n; i++)
	{
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n/2; i++)
	{
		HoanVi(a[i], a[n - (i + 1)]);
	}
#else

	for (int i = n - 1; i >= 0; i--)
	{
		printf("Nhap phan tu thu %d: ", n - i);
		scanf("%d", &a[i]);
	}
#endif

	printf("\n\nDay so sau khi duoc dao nguoc:\n");
	for (int i = 0; i < n; i++)
	{
		printf("Phan tu thu %d: %d\n", i+1, a[i]);
	}


	printf("\n\nCHUONG TRINH KET THUC");
	_getch();
	return 0;
}
