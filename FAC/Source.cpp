#include<stdio.h>
void fact(int*);
void getInt(int*);
int main()
{
	int n[10];
	int* pN = n;
	getInt(pN);
	fact(pN);

}
void fact(int* pN)
{
	if (*pN >= 0 && *pN <= 10)
	{
		for (int j = *pN;j > 1;j--)
		{
			*pN = *pN * (j - 1);
		}
		printf("%d", *pN);
	}
	else
	{
		printf("Error");
	}
}
void getInt(int* pA)
{
	scanf_s("%d", pA);
}