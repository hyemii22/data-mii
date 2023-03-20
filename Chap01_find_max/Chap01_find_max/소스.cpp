#include <stdio.h>

int findarrayMax(int score[], int n)
{
	int tmp = score[0];
	for (int i = 1; i < n; i++) {
		if (score[i] > tmp) {
			tmp = score[i];
		}
	}
	return tmp;
}

void main()
{
	int score[5] = { 12, 123, 12, 54, 1 };
	int out;
	out = findarrayMax(score, 5);
	printf("result = %d, out");
}