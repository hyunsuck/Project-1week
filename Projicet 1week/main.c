#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int result = 0;
	int p = 0;
	for (int i = 2; i <= 100; i++)
	{
		for (p = 2; p < i; p++)
		{
			if (i % p == 0)
				break;
		}
		if (p == i)
			result += p;
	}
	printf("1���� 100���� �Ҽ��� �� = %d\n", result);
	system("pause");
}