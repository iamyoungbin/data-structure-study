#include <stdio.h>

int GetBC(int n, int k)
{
	if (n == 0 || k == 0)
		return 1;
	else return GetBC(n - 1, k - 1) + GetBC(n - 1, k);
}

int main()
{
	int n, k;
	int result;

	scanf_s("%d %d", &n, &k);

	result = GetBC(n, k);

	printf("%d\n", result);

	return 0;
}