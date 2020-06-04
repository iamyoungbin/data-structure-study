#include <stdio.h>

void Hanoi(int, char, char, char);
void Move(char, char);

int main()
{
	int n;

	scanf_s("%d", &n);

	Hanoi(n, 'A', 'C', 'B');

	return 0;
}

void Move(char from, char to)
{
	printf("from %c to %c\n", from, to);
}

void Hanoi(int n, char from, char to, char temp)  // amount of plates, be putted, will be putted and helped tower
{
	if (n == 1) Move(from, to);

	else {
		Hanoi(n - 1, from, temp, to);
		Move(from, to);
		Hanoi(n - 1, temp, to, from);
	}
}