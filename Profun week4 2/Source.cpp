#include<stdio.h>
int area(int b, int c, int d)
{
	return b * c * d;
} 
int main()
{
	int b, c, d;
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	scanf_s("%d", &d);
	int a[] = { b,c,d };
	printf(" Wide = %d\n Long = %d\n High = %d ", a[0], a[1], a[2]);
	printf("\nArea = %d", area(b, c, d));
	if (area(b, c, d) > 0 && area(b, c, d) <= 10000)
	{
		if (area(b, c, d) < 5000)
		{
			printf("\n\nSmall cube");
		}
		else
		{
			printf("\n\nBig cube");
		}
	}
	return 0;
}