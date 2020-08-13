#include "sapXep.h"


int main()
{
	int arr[100];
	int size_arr = 0;

	soluong:
		printf_s("Nhap so luong phan tu cua mang can tao(Max 100 phan tu ): ");
		scanf_s("%d", &size_arr);
	if (size_arr < 0 || size_arr > 100)
	{
		goto soluong;
	}

	nhapMang(size_arr, arr);
	printf_s("Mang truoc sap xep: \n");
	xuatMang(size_arr, &arr);
	sapXepTangDan(size_arr, &arr);
	printf_s("Mang sau sap xep: \n");
	xuatMang(size_arr, &arr);

	return 0;
}