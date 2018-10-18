#include "function.h"

int main()
{

	double S;
	YeuCau();
	NhapSo(S);

	int i = 0;
	while (NewtonRaphson(S, i) != NewtonRaphson(S, i + 1))
		i++;

	XuatSo(NewtonRaphson(S, i));

	Wait();
	return 0;
}