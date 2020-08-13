#pragma once
#include "sapXep.h"

void sapXepTangDan(int size_arr, int* p_arr)
{
	int i = 0;
	while (i < size_arr)
	{
		int j = i + 1;
		while (j < size_arr)
		{
			if (*(p_arr + j) < *(p_arr + i))
			{
				int temp = 0;
				temp = *(p_arr + j);
				*(p_arr + j) = *(p_arr + i);
				*(p_arr + i) = temp;
			}
			j++;
		}
		i++;
	}
}

void nhapMang(int size_arr, int* p_arr)
{
	for (int i = 0; i < size_arr; ++i) 
	{
		printf("\r\nNhap phan tu mang[%d]: = ", i);
		scanf_s("%d", (p_arr + i));
	}
}

void xuatMang(int size_arr, int* p_arr)
{
	for (int i = 0; i < size_arr; i++)
	{
		printf_s("%d\t", *(p_arr + i));
	}
	printf_s("\r\n");
}